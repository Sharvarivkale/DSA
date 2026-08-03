class Solution {

public:
void solve( string &digits,vector<string> &ans,string output,int index,string mapping[]){
    //base condition
    if(index>=digits.size()){
        ans.push_back(output);
        return;
    }
    int number=digits[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,ans,output,index+1,mapping);

        //backtracking
        output.pop_back();

    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapping);
        return ans;
    }
};