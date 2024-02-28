class Solution {
public:
    int compress(vector<char>& ch) {
        int index = 0, c = 1;
        char pre = ch[0];
        for (int i = 1; i < ch.size(); ++i) {
            if (ch[i] == pre) {
                c++;
            } else {
                ch[index++] = pre;
                if (c > 1) {
                    int s = index;

                    while (c) {
                        ch[index++] = (c % 10) + '0';
                        c /= 10;
                    }
                    reverse(ch.begin() + s, ch.begin() + index);
                }
                pre = ch[i];
                c = 1;
            }
        }
        ch[index++] = pre;
        if (c > 1) {
            int s = index;
            while (c) {

                ch[index++] = (c % 10) + '0';
                c /= 10;
            }
            reverse(ch.begin() + s, ch.begin() + index);
        }
        return index;
    }
};