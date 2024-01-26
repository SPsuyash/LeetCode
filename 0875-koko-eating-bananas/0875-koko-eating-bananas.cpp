// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//         int i=0;
//         int k=1;
//         int sum=0;
//         int sume=0;
//         for(int i=0;i<n;i++)
//         {
//             sum=sum+piles[i];
//         }
//          int x=ceil(sum/h);
//         while(k<=x)
//         {
//             for(int i=0;i<n;i++)
//             {
//             sume=sume+ceil(piles[i]/k);
//             }
//             if(sume!=h)
//             {
//                 k++;
//             }
//             else{
//                 break;
//             }
//         }
//         return k;
//     }
// };
class Solution {
public:
    long long timetaken(vector<int>& piles, int k)
    {
        long long ans=0;
        for (int i=0; i<piles.size(); i++){
            ans+= (piles[i]/k)+(piles[i]%k!=0);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h)
     {
        int low=1; int high= *max_element(piles.begin(),piles.end());
        while (low <= high)
        {
            int mid= low+ (high-low)/2;
            if (timetaken(piles,mid)<=h)
            {
                high= mid-1;
            }
            else low= mid+1;
        }
        return low;
    }
};