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
                    cout << "solution 1 holds: true" << endl;
                    return true;
                }
            }
        }
        return false;
    }
};

class Solution2 {
public:
    bool containsDuplicate2(vector<int>& nums) {

        if(nums.empty() || (nums.size() == 1))
        {
            return false;
        }

        sort(nums.begin(), nums.end());

        for(int i= 0; i < nums.size() - 1 ; i++)
        {
            if (nums[i] == nums[i+ 1])
            {
                cout << "solution 2 holds: true" << endl;
                return true;
            }
        }
        return false;
    }
};


int main()
{
    Solution result;
    Solution2 result2;
    vector<int> test1 {1,2,3,4,2,6,4,9};
    result.containsDuplicate(test1);
    result2.containsDuplicate2(test1);


};