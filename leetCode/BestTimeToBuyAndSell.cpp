/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
*/

//solution

int maxProfit(vector<int>& prices)
    {
        size_t i = 0, j = 0, profet = 0;
        while(i < prices.size() - 1)
        {
            while(i < prices.size() - 1 && prices[i] > prices[i+1]) ++i;
            j = i+1;
            if(j >= prices.size()) break;
            if(j == prices.size() - 1 && prices[j] > prices[i])
            {
                profet += prices[j] - prices[i];
                break;
            }
            while(j < prices.size() - 1 && prices[j+1]> prices[j]) ++j;
            profet += prices[j] - prices[i];
            i = j + 1;
        }
        return profet;
    }

