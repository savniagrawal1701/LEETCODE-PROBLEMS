class Solution {
public:
    // Next Greater Element (Strictly Greater)
    vector<int> findNGE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }

    // Next Smaller Element (Strictly Smaller)
    vector<int> findNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }

    // Previous Smaller or Equal Element (Handles equality to avoid duplicates)
    vector<int> findPSEE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            // Note the '>' operator here paired with '>=' in NSE
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }

    // Previous Greater or Equal Element (Handles equality to avoid duplicates)
    vector<int> findPGE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            // Note the '<' operator here paired with '<=' in NGE
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }

    // Returns sum of all subarray minimums without modulo
    long long sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNSE(arr);
        vector<int> psee = findPSEE(arr);
        int n = arr.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - psee[i];
            long long right = nse[i] - i;
            sum += left * right * arr[i];
        }
        return sum;
    }

    // Returns sum of all subarray maximums without modulo
    long long sumSubarrayMax(vector<int>& arr) {
        vector<int> nge = findNGE(arr);
        vector<int> pge = findPGE(arr); // Fixed helper name mapping
        int n = arr.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;
            sum += left * right * arr[i];
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        long long smallest = sumSubarrayMins(nums);
        long long greatest = sumSubarrayMax(nums);
        return greatest - smallest;
    }
};
