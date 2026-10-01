class Solution {
    void solve(int n, int open, int close, string output, vector<string> &ans) { 
    // base condition 
    if(output.length() == 2 * n) {
        ans.push_back(output); 
        return; 
    }
    // include opening bracket 
    if(open < n) { 
        output.push_back('('); 
        solve(n, open + 1, close, output, ans); 
        // backtrack 
       output.pop_back(); 
    } 
    // include closing bracket 
    if(close < open) { 
        output.push_back(')');
        solve(n, open, close + 1, output, ans); 
        // backtrack 
        output.pop_back(); 
    }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output; 
        int open = 0; 
        int close = 0; 
        solve(n, open, close, output, ans); 
        return ans;
        
    }
};
