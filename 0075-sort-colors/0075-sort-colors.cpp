class Solution {
public:
    void sortColors(vector<int>& nums) {
       //sort(nums.begin(),nums.end());
    //    int z,o,t;
    //    z=o=t=0;
    //    for(int i=0;i<nums.size();i++)
    //    {
    //        if(nums[i]==0)
    //        {
    //            z++;
    //        }
    //        else if(nums[i]==1)
    //        {
    //            o++;
    //        }
    //        else
    //        {
    //            t++;
    //        }
    //    }
    //    int i=0;
    //    while(z--)
    //    {
    //        nums[i]=0;
    //        i++;
    //        }
    //        while(o--)
    //    {
    //        nums[i]=1;
    //        i++;
    //        }
    //        while(t--)
    //    {
    //        nums[i]=2;
    //        i++;
    //        }
    int l=0,m=0,h=nums.size()-1;
    while(m<=h)
    {
        if(nums[m]==0)
        {
            swap(nums[l],nums[m]);
            l++,m++;
        }
        else if(nums[m]==1)
        {
            m++;
        }
        else
        {
            swap(nums[m],nums[h]);
            h--;
        }
    }
           }
};