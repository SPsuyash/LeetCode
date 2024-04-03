class Solution {
public:
    int lengthOfLastWord(string s){
        int n=s.size();
        int c=0;
        int a;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                c=0;
            }
            else{
                c++;
                a=c;
            }
        }
        return a;
        
    }
};