#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() < 1)
        {
            cout << "false";
            return false;
        }
        for(int i=0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); i++)
            {
                if (nums[i] == nums[j])
                {
                    cout << "true";
                    return true;
                }
            }
        }
        return false;
    }
};


int main()
{
    Solution result;
    vector<int> test1 {1,2,3,4,2,6,4,9};
    result.containsDuplicate(test1);

};