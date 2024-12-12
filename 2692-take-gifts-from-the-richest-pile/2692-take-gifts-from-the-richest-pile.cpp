class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        sort(gifts.begin(),gifts.end());
        for(int j=0;j<k;j++)
        {
            long long max=INT_MIN;
            long long m;
            for(int i=0;i<n;i++)
            { 
                if(gifts[i]>max)
                {
                    max=gifts[i];
                    m=i;
                }   
                }
        gifts[m]=sqrt(max);
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=gifts[i];
    }
    return sum;

    }
};