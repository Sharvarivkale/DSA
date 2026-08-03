#include <iostream>
#include <vector>
using namespace std;


void solve(vector<int> &nums,vector<vector<int>> &ans,vector<int> &output,int index){
  //base condition
  if(index>=nums.size()){
    ans.push_back(output);
    return;
  }
  //exclude
  solve(nums,ans,output,index+1);

  //include
  output.push_back(nums[index]);
  solve(nums,ans,output,index+1);

  //pop it out or backtracking
  output.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums){
  vector<vector<int>> ans;
  vector<int> output;
  int index=0;
  solve(nums,ans,output,index);
  return ans;

}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    cout << "All Subsets are:\n";

    for (auto subset : result) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}