class MyStack {
public:
    MyStack() {}
    queue<int> q;
    void push(int x) {
        int s = q.size(); // before wala size

        q.push(x);
        // The loop simply grabs every older item from the front of the queue
        // and cycles it to the very back.
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int n = q.front();

        q.pop();

        return n;
    }

    int top() { return q.front(); }

    bool empty() { return q.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
