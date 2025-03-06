class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>ans;
        vector<int>arr;
        for(int i=0;i<grid.size();i++) 
        {
            for(int j=0;j<grid[0].size();j++) 
            {
                ans[grid[i][j]]++;
            }
        }
        int miss=0,repeat=0;
        for(int i=1;i<=grid.size()*grid[0].size();i++) {
            if(ans[i]==2) 
            {
                repeat=i;
            }
            if(ans[i]==0)
            {
                miss=i;
            }
        }
        return {repeat,miss};
    }
};
