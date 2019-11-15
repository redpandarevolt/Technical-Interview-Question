// LeetCode Question Two Sum
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target )
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution test1:
    Solution test2:

    vector<int> testNumbers {2, 7, 11, 15};
    vector<int> testNumbers2 {4,3,2,1};

    test1.twoSum(testNumbers, 9);
    test2.twoSum(testNumbers2, 5);
}