class StockSpanner {
    
    stack<pair<int, int>> st; 
    int ind = -1;

public:
    StockSpanner() {
        ind = -1;
        
        while(!st.empty()) {
            st.pop();
        }
    }
    
    int next(int val) {
        
        ind = ind + 1;
        
        
        while(!st.empty() && st.top().first <= val) {
            st.pop();
        }
        
        int ans;
        
        if(st.empty()) {
            ans = ind + 1;
        } 
        
        else {
            ans = ind - st.top().second;
        }
        
        
        st.push({val, ind});
        
        return ans;
    }
};
