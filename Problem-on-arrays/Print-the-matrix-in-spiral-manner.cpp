class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startrow=0,startcol=0,n= matrix.size(), m= matrix[0].size();
        vector<int> ans;

        while (startrow<n && startcol<m){
            for (int i=startcol; i<m; i++){
                ans.push_back(matrix[startrow][i]);
            }
            startrow++;
            for (int i=startrow; i<n; i++){
                ans.push_back(matrix[i][m-1]);
            }
            m--;
          
            if (startrow>=n || startcol>=m)break;
            for (int i= m-1; i>=startcol; i--){
                ans.push_back(matrix[n-1][i]);
            }
            n--;
            for (int i= n-1; i>= startrow; i--){
                ans.push_back(matrix[i][startcol]);
            }
            startcol++;
            
        }
        return ans;
    }
};
