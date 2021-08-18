/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        vector<int> projection(n*n);
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                projection[(j*n) + (n - i -1)] = matrix[i][j];
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                matrix[i][j] = projection[i*n+j];
    }
};
