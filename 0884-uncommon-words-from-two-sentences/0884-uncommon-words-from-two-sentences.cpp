class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        stringstream ss(s1);
        string word;
        while(ss>>word)
        { 
            mp[word]++;
        }
        stringstream sss(s2);
        string words;
        while(sss>>words)
        { 
            mp[words]++;
        }
        vector<string> ans;
        for(auto x: mp)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     map<string,int>mp;
    
//     void stringstreeam(string s)
//     {
//         stringstream ss(s);
//         string word;
//         while(ss>>word) mp[word]++;
//     }

//     vector<string> uncommonFromSentences(string s1, string s2) 
//     {
//         stringstreeam(s1);
//         stringstreeam(s2);

//         vector<string>ans;
//         for(auto x:mp)
//             if(x.second==1) 
//                 ans.push_back(x.first);

//         return ans;
//     }
// };