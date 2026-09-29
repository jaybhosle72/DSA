#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size() ; i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        return vector<int>{i,j};
                    }
                }

            }
            
            

        }
        return vector<int>{};
    }
};


int main() {

    vector<int> nums = {3,3};
    int target = 6;

    Solution obj;

    vector<int> result = obj.twoSum(nums, target);

    cout << result[0] << " " << result[1];

    return 0;
}