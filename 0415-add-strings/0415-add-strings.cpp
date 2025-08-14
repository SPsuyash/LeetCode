class Solution {
public:

 void addre(string& num1,int p1, string& num2,int p2,int carry,string& ans)
{
    //basecase
    if(p1<0 && p2<0){
        if(carry!=0)
        {
               ans.push_back(carry + '0');
        }
        return;
    }
    int n1= ( p1>=0 ? num1[p1]:'0')-'0';
    int n2= ( p2>=0 ? num2[p2]:'0')-'0';
    int sum=n1+n2+carry;
    int digit=sum%10;
    carry=sum/10;

    ans.push_back(digit + '0');
    addre(num1,p1-1,num2,p2-1,carry,ans);
}
    string addStrings(string num1, string num2) {
        int p1=num1.size()-1;
        int p2=num2.size()-1;
        int carry=0;
        string ans="";
        addre(num1,p1,num2,p2,carry,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};