class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
         sort(arr.begin(), arr.end());
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int c=1;
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) 
                {
                    c++;
                    i++;
                }
            ans.push_back(c);
        }
        sort(ans.begin(), ans.end());
        int x=0;
        int m=ans.size();
        for(int i=1;i<m;i++)
        {
                if(ans[i]==ans[i-1])
                {
                   return false;
                }
        }
        return true;
    }
};