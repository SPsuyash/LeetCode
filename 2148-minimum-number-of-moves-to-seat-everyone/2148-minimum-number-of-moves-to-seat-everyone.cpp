class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& stu) {
        sort(s.begin(),s.end());
        sort(stu.begin(),stu.end());
        int x;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            x=0;
            x=abs(s[i]-stu[i]);
            c=c+x;   
        }
        return c;
    }
};