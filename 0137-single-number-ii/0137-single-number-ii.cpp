class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>ans;
        int a;
        for(auto it:nums)
        {
            ans[it]++;
        }
        for(auto it:ans){
            if((it.second)<3)
           a=it.first;
        }
        return a;
    }
};