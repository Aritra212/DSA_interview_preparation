// Rotate Image LeetCode - 48

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= m;

        // generate transpose
        for(int i=0;i<m;++i){
            for(int j=i;j<n;++j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse rows
        for(int i=0;i<m;++i){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};