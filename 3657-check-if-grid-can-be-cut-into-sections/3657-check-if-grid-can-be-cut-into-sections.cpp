class Solution {
public:
    bool check(vector<pair<int,int>> &vec){
        int co=0;
        int env=vec[0].second;
        for(int i=1; i<vec.size(); i++){
            if(vec[i].first>=env){
                co++;
                env=vec[i].second;
            }
            else{
                env=max(env, vec[i].second);
            }
            if(co==2) return true;
        }
        return false;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int,int>> horz, vert;
        for(int i=0; i<rectangles.size(); i++){
            horz.push_back({rectangles[i][1], rectangles[i][3]});
            vert.push_back({rectangles[i][0], rectangles[i][2]});
        }
        sort(horz.begin(), horz.end());
        sort(vert.begin(), vert.end());
        bool ans=check(horz);
        if(ans) return ans;
        return check(vert);
    }
};