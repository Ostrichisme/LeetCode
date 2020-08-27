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
           //�Yintervals[i][0]��ans�̫�@�Ӱ϶��٤j�A��ܳo�O�@�ӷs�϶�
           if(intervals[i][0]>ans.back()[1])
               ans.push_back(intervals[i]);
           //�_�h���overlapping�Aintervals[i][0]���bans�̫�@�Ӱ϶����A�u�ݧ�sans�̫�@�Ӱ϶���[1]�A��max
           /* ex: ans.back()=[1,3] intervals[i]=[2,6]
                  ��sans.back()[1]��6
                  ans.back()=[1,4] intervals[i]=[2,3]
                  �O�dans.back()[1]��4
           */
          else
              ans.back()[1]=max(ans.back()[1],intervals[i][1]);
       }
        return ans;
    }
};
