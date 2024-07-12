class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>ans;
        int a;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        for(auto it:ans){
            if((it.second)<3)
           a=it.first;
        }
        return a;
    }
};