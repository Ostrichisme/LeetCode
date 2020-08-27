class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size=intervals.size();
        if(size<2)
            return intervals;
        sort(intervals.begin(),intervals.end());


    vector<vector<int>> ans;
        ans.push_back(intervals[0]);

       for(int i=1;i<size;i++){
           //若intervals[i][0]比ans最後一個區間還大，表示這是一個新區間
           if(intervals[i][0]>ans.back()[1])
               ans.push_back(intervals[i]);
           //否則表示overlapping，intervals[i][0]落在ans最後一個區間內，只需更新ans最後一個區間的[1]，取max
           /* ex: ans.back()=[1,3] intervals[i]=[2,6]
                  更新ans.back()[1]為6
                  ans.back()=[1,4] intervals[i]=[2,3]
                  保留ans.back()[1]為4
           */
          else
              ans.back()[1]=max(ans.back()[1],intervals[i][1]);
       }
        return ans;
    }
};
