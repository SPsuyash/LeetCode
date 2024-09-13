class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> ans;
        
        for(int i=0;i<queries.size();i++)
            {
                int x=0;
                int m=queries[i][0];
                int q=queries[i][1];
                while(m<=q)
                {
                     x=x^arr[m];
                     m++;
                }
                ans.push_back(x);
            }
             return ans;
    }  
};