class MyHashSet {
public:
    int dict[1000001] = {0};
    MyHashSet() {
        
    }
    
    void add(int key) {
        dict[key] = 1;
    }
    
    void remove(int key) {
        dict[key] = 0;
    }
    
    bool contains(int key) {
        if(dict[key] == 1){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */