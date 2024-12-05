// class Solution {
// public:
//     bool canChange(string start, string target) {
//         int n = start.size();
//         int m = target.size();
//         int i = 0, j = 0;
//         if (n != m) {
//             return false;
//         }
//         while (j < m && i < n) {

//             if (start[i] == '_' && target[j] == '_') {
//                 i++;
//                 j++;
//             } else if (target[j] == 'L') {
//                 if ((start[i] == '_') || ((start[i] == 'L') && j <= i)) {
//                     i++;
//                 } else {
//                     return false;
//                 }
//             } else if (target[j] == 'R') {
//                 if ((start[i] == '_') || ((start[i] == 'R') && j >= i)) {
//                     i++;
//                 } else {
//                     return false;
//                 }
//             }
//             else{
                
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int m = target.size();
        if (n != m) return false;

        int i = 0, j = 0;
        while (i < n && j < m) {
            while (i < n && start[i] == '_') i++;
            while (j < m && target[j] == '_') j++;

            if (i == n && j == m) return true;
            if (i == n || j == m) return false;
            if (start[i] != target[j]) return false;
            if (start[i] == 'L' && j > i) return false;
            if (start[i] == 'R' && j < i) return false;

            i++;
            j++;
        }

        while (i < n && start[i] == '_') i++;
        while (j < m && target[j] == '_') j++;

        return i == n && j == m;
    }
};
