class Solution {
private:
    vector<int> nextsmallerelement(vector<int> &arr, int n) {
        stack<int> st;
        st.push(-1);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevsmallerelement(vector<int> &arr, int n) {
        stack<int> st;
        st.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestrectanglearea(vector<int> &arr, int n) {

        vector<int> next = nextsmallerelement(arr, n);
        vector<int> prev = prevsmallerelement(arr, n);

        int maxarea = 0;

        for (int i = 0; i < n; i++) {

            if (next[i] == -1)
                next[i] = n;

            int width = next[i] - prev[i] - 1;
            int area = arr[i] * width;

            maxarea = max(maxarea, area);
        }

        return maxarea;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        if (matrix.empty())
            return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        // Histogram for first row
        vector<int> height(m);

        for (int j = 0; j < m; j++) {
            height[j] = matrix[0][j] - '0';
        }

        int maxarea = largestrectanglearea(height, m);

        // Process remaining rows
        for (int i = 1; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == '1')
                    height[j] += 1;
                else
                    height[j] = 0;
            }

            maxarea = max(maxarea, largestrectanglearea(height, m));
        }

        return maxarea;
    }
};