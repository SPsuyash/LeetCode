class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        while(nums.size()>0){
            vector<int> v1;
            for(int i=nums.size()-1;i>=0;i--){
                if(find(v1.begin(),v1.end(),nums[i])==v1.end()) {
                    v1.push_back(nums[i]);
                    nums.erase(nums.begin()+i);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};