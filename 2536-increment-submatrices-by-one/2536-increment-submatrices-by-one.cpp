class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n, vector<int>(n, 0));  // create matrix

        for (auto &q : queries) {
            int r1 = q[0];
            int c1 = q[1];
            int r2 = q[2];
            int c2 = q[3];

            for (int i = r1; i <= r2; i++) {
                for (int j = c1; j <= c2; j++) {
                    mat[i][j] += 1;
                }
            }
        }

        return mat;
    }
};
