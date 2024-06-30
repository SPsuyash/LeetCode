class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
          vector<int> result;
        map<int,int>ans;
      
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        for(auto&it:ans){
            if((it.second)==1)
           {
            result.push_back(it.first);
           }
        }
        return result;
    }
};