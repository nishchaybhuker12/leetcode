class SmallestInfiniteSet {
public:
    set<int> s;
    SmallestInfiniteSet() {
        
    for(int i=1;i<=1000;i++)
        s.insert(i);
    }
    
    int popSmallest() {
        int t=*s.begin();
        s.erase(s.begin());
        return t;
    }
    
    void addBack(int num) {
        if(s.find(num)==s.end())
        s.insert(num);
    }
};
