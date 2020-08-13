class RandomizedSet {
    private:
        //map��key�sval�Avalue�svec��index
        unordered_map<int,int> map;
        //vec�Uindex���ȹ�����val
        vector<int> vec;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(map.find(val)!=map.end())
            return false;
        map[val]=vec.size();
        vec.push_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    /*ex:
    map key    3 4 5
        value  0 1 2
        -------------
    vec index  0 1 2
        value  3 4 5

    remove 3
    �����Xmap[3]��index:0�A�A�Nvec[0]�]���Pvec[2]
    vec index  0 1 2
        value  5 4 5
    �]���N�i�H����vec.pop_back()

    �������~�]���Nmap[5]�]��map[3]
     map key    3 4 5
         value  0 1 0
    ���۴N�i�Hmap.erase(3)
    */
    bool remove(int val) {
        if(map.find(val)==map.end())
            return false;
        int lastIndex=vec.size()-1;
        int lastVal=vec[lastIndex];
        //�����omap[val]�����쪺index�A�ñNvec[index]�]��vec[lastIndex]
        vec[map[val]]=vec[lastIndex];
        //�Nmap[lastVal]�]��map[val]�A�]������map[val]�|�Q�R��
        map[lastVal]=map[val];
        map.erase(val);
        vec.pop_back();
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return vec[rand()%vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
