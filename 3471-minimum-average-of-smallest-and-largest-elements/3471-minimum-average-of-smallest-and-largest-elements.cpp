class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>ans;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double avg;
        while(i<=j)
        {
            avg=(nums[i]+nums[j])/2.0;
            ans.push_back(avg);
            i++,j--;
        }
        double min=INT_MAX;
        for(int i=0;i<ans.size();i++)
        {
            if(min>ans[i])
            {
                min=ans[i];
            }
        }
        return min;
    }
};