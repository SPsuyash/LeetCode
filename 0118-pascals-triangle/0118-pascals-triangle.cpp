class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        for(int i=0;i<numRows;i++)
        {
            vector<int>ans;
            for(int j=0;j<=i;j++)
           if (j == 0 || j == i)
                    ans.push_back(1);
                else 
                    ans.push_back(arr[i - 1][j - 1] + arr[i - 1][j]);
            
            arr.push_back(ans);
        }
        return arr;
    }
};