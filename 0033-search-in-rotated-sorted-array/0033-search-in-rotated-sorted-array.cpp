class Solution {
public:
    int search(vector<int>& nums, int target) {
        int e=nums.size()-1;
        int s=0;
        int mid=(s+e)/2;
            while(s<=e)
            {
                
                if(nums[mid]==target)
                {
                    return mid;
                }
                else if(nums[mid]>target)
                {
                    if(nums[mid]>nums[s] && nums[s]<=target)
                    {
                        e=mid-1;
                    }
                    else{
                        s=mid+1;
                    }
                }
                else{
                    if(nums[mid]>nums[e] && nums[e]<=target)
                    {
                        s=mid+1;
                    }
                    else{
                        e=mid-1;
                    }
                }
                mid=(s+e)/2;
        }
        return -1;
    }
};