class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        //利用priority queue的排序特性: 大的優先
        priority_queue<pair<int,int>> pq;
        for(int &n:nums)
            m[n]++;
        for(auto &i:m)
            pq.push(make_pair(i.second,i.first));
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
