class Solution {
    bool ispallindrome(string s1,int i,int j){
        while(i<j){
            if(s1[i]!=s1[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
    void solve(string s,int index,vector<string> output,vector<vector<string>> &ans){
        //base condition
        if(index>=s.length()){
            ans.push_back(output);
            return;
        }

        //main recursion part
        for(int i=index;i<s.length();i++){
            //condition first for the chcek whether it pallindrome or not
            if(ispallindrome(s,index,i)){
                output.push_back(s.substr(index,i-index+1));
                solve(s,i+1,output,ans);
                //backtrack
                output.pop_back();
            }
        }

    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> output;
        int index=0;
        solve(s,index,output,ans);

        return ans;
    }
};
