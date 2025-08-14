class Solution {
public:
void reverse(vector<char>& s,int st,int e)
{
    if(st>=e)
    {
        return;
    }
    swap(s[st],s[e]);
    reverse(s,st+1,e-1);

}
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        reverse(s,0,e);
    }
};