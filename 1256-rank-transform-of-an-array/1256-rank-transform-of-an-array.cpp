class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans=arr;
        unordered_map<int,int>mp;
        int n=arr.size();
        int rank=1;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++)
        {
            if(i==0 || ans[i]==ans[i-1])
            {

            }
            else{
                rank++;
            }
            mp[ans[i]]=rank;
        }
        for(auto &x:arr)
        {
            x=mp[x];
        }
        return arr;
    }
};