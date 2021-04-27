class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);//初始化为个数为numRows的二维数组
        for (int i = 0; i < numRows; i++) {
            res[i].resize(i + 1); //将第i行扩容到第i+1行
            res[i][0] = res[i][i] = 1; //每行第一个和最后一个数都为1
            for (int j = 1; j < i; ++j) {
                res[i][j] = res[i - 1][j] + res[i - 1][j - 1]; //每个数是其左上方和右上方的数的和
            }
        }
        return res;
    }
};
