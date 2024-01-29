class Solution {
public:
    string removeDuplicates(string s) {
        string a="";
        int n=s.length();
        int i=0;
        while(i<n)
        {
            if(a.length()>0)
            {
            if( (a.length()-1>=0)&&a[a.length()-1]!=s[i])
            {
                a.push_back(s[i]);
            }
            else
            {
                a.pop_back();
            }
    }
            else{
                     a.push_back(s[i]);
            }
            i++;
        }
        return a;
    }
};