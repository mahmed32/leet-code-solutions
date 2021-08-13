#set the kth bit to 0
def killKthBit(n, k):
    return n & ~(1<<(k-1))

#given an array of numbers get the first 8 bits from it and append them to be MSBs in the answer
def arrayPacking(a):

    mask = 0x000000ff

    for i in range(len(a)):
        a[i] &= mask

    sum = 0

    for i in range(len(a)):
        sum += (a[i] << i*8)

    return sum

#count all 1's in the binary representaion for all number in range a to be inclusive
def rangeBitCount(a, b):
    count = 0
    for i in range(a, b+1):
        while(i != 0):
            i &= (i - 1)
            count += 1
    return count

