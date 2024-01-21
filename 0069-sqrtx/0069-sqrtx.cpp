class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int a=0;
       int mid=s+(e-s)/2;
        while(s<=e)
        {
              
              if((long)mid*mid==(long)x)
              {
                  return mid;
              }
              else if((long)mid*mid>x)
              {
                  e=mid-1;
              }
              else{
                  a=mid;
                  s=mid+1;
              }
            mid=s+(e-s)/2;
        }
        return a;
    }
};