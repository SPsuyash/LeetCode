class Solution {
     long long int sum(int n){
    long long int s=0;
    
    while(n>0)
        {
            int digit=n%10;
             s =s+ digit*digit;
            n=n/10;
        }
        return s;
    }
public:
    bool isHappy(int n) {
         long long int x= n;
        long long int y= sum(n);  
        while(x!=y)
        {
            x=sum(x);
          y=sum(sum(y));
       
        if(x==1 || y==1)
        {
            return true;
        }
        }
        return x==1;

    }
   
};
