class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1,c=0;
        while(i<=nums.size()-1){
            while(nums[i]<=nums[i-1])
            {
                c+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
            i++;
        }
        return c;
    }
};