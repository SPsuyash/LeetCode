class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string mystr="";
        int n=s.size();
        int m=spaces.size();
        int i=0;
        int j=0;
        if(spaces[0]==0){
            mystr+=' ';
            j=1;
        }
        while(i<n)
        {
             if(j==m)
            {
                mystr+=s[i];
                i++;
            }
            else if(i != spaces[j])
            {
                mystr+=s[i];
                i++;
            }
           
            else{
                mystr+=' ';
                j++;
            }
            
        }
        return mystr;
    }
};