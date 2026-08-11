class Solution {
public:
   int maxOperations(string s) {
       int n = s.size();
       int operations = 0;
       int ones = 0;
       for (int i = 0; i < n; ++i) {
           if (s[i] == '1') {
               ++ones;
           }
           if (0 < i && s[i - 1] == '1' && s[i] == '0') {
               operations += ones;
           }
       }
       return operations;
   }
};