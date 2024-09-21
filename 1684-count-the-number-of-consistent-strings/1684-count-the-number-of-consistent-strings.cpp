class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        int m=a.size();
        int n=w.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<w[i].size();j++)
            {
                for(int k=0;k<m;k++)
                {
                if(a[k]==w[i][j])
                {
                    c++;
                }
                }
            }
            if(w[i].size()==c)
            {
                s++;
            }
        }
        return s;
    }
};