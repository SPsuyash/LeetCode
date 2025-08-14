class Solution {
public:
void strremove(string& s,string& part)
{
    int n=s.find(part);
    if(n!=string::npos){
       string left = s.substr(0,n);
       string right= s.substr(n+part.size(),s.size());
       s=left+right;
       strremove(s,part);
    }
    else{
        return;
    }
}
    string removeOccurrences(string s, string part) {
        strremove(s,part);
        return s;
    
    }
};