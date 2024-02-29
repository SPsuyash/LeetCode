class Solution { //laxisogrphically
public:
static bool mycom(string a,string b)
 {
     string t1=a+b;
     string t2=b+a;
     return t1>t2;
 }
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(auto n : nums)
        {
            ans.push_back(to_string(n));
        }
        sort(ans.begin(),ans.end(),mycom);
        if(ans[0]=="0")
        {
            return "0";
        }
        string an="";
        for(int i=0;i<ans.size();i++){
            an+=ans[i];
        }
        return an;
    }
};