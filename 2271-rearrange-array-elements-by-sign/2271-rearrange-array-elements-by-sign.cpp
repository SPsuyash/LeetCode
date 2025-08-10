class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        int pos=0;
        int neg=1;
        for(auto num:nums)
        {
            if(num>=0)
            {
               arr[pos]=num;
                pos+=2;
            }
            else{
                arr[neg]=num;
                neg+=2;
            }


        }
        return arr;
    }
};