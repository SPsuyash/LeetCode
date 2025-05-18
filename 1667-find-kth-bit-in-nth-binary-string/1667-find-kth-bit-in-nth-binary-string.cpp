class Solution {
public:
    string invert(string s){
        for(char &c : s) {
            c=(c=='0')?'1':'0';
        }
        return s;
    }
    
    string reverse(string s){
        std::reverse(s.begin(),s.end());
        return s;
    }
    
    string Bstring(int n) {
        string ss="0";
        while(n--){
            ss =ss +"1"+reverse(invert(ss));
        }
        return ss;
    }
    
    char findKthBit(int n,int k){
        string st=Bstring(n);
        return st[k-1];
    }
};
