class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
        int a=0,b=0;
        while(b<=n){
            if(nums[b]==0)
            {
                swap(nums[a],nums[b]);
                a++;
                b++;
            }
            else if(nums[b]==1)
            {
                b++;
            }
            else{
                swap(nums[b],nums[n]);
                n--;
              
            }
        }
        
    }
};