class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        //�Q��priority queue���ƧǯS��: �j���u��
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
