class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return {};
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;
        int left=0,right=n-1,top=0,bottom=m-1;
        //暴力解，四邊依序算，當ans填滿後就break
        while(true) {
            for(int i=left;i<=right;i++)
                ans.push_back(matrix[top][i]);
            top++;
         if(ans.size()>=m*n) break;
            for(int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            right--;
          if(ans.size()>=m*n) break;
            for(int i=right;i>=left;i--)
                ans.push_back(matrix[bottom][i]);
           bottom--;
           if(ans.size()>=m*n) break;
            for(int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][left]);
           left++;
          if(ans.size()>=m*n) break;

        }
        return ans;

    }
};
