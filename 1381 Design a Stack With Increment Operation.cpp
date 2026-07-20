class CustomStack {
public:
vector<int> st;
int size=0;
int maxcap;
    CustomStack(int maxSize) {
        maxcap=maxSize;
    }
    
    void push(int x) {
        if(maxcap>size){
            st.push_back(x);
            size++;
        }
        
    }
    
    int pop() {
        if (!st.empty()) {
            int topElement = st.back();
            st.pop_back();              
            size--;                     
            return topElement;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i =0;i<min(k,size);i++){
            st[i]=st[i]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
