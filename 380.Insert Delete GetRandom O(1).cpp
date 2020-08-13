class RandomizedSet {
    private:
        //map的key存val，value存vec的index
        unordered_map<int,int> map;
        //vec各index的值對應到val
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
    先取出map[3]的index:0，再將vec[0]設為與vec[2]
    vec index  0 1 2
        value  5 4 5
    因此就可以執行vec.pop_back()

    除此之外也須將map[5]設成map[3]
     map key    3 4 5
         value  0 1 0
    接著就可以map.erase(3)
    */
    bool remove(int val) {
        if(map.find(val)==map.end())
            return false;
        int lastIndex=vec.size()-1;
        int lastVal=vec[lastIndex];
        //先取得map[val]對應到的index，並將vec[index]設成vec[lastIndex]
        vec[map[val]]=vec[lastIndex];
        //將map[lastVal]設成map[val]，因為等等map[val]會被刪除
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
