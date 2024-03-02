class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

         sort(nums.begin(), nums.end(), [](int i, int j) { return abs(i) < abs(j); });
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=abs(nums[i]*nums[i]);
        }
     return nums;   
    }
};