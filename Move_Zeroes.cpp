// LeetCode Questin: Move Zeroes
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int zeros = 0;
        int n = nums.size();
        //for(int i = 0; i < nums.size(); i++)

        for(vector<int>::iterator it = nums.begin(); it!= nums.end();)
        {
            //if(nums[i] == 0)
            if(*it == 0)
            {
                //nums.push_back(nums[i]);
                nums.erase(it);
                zeros++;
            }
            else
                it++;
        }
        for(int i = n - zeros; i < n; i++)
            nums.push_back(0);
    }
};

int main()
{
    Solution test1:
    Solution test2:

    vector<int> testNumbers {0, 1, 0, 3, 12};
    vector<int> testNumbers2 {0, 0, 4, 0, 3, 0, 2, 1};

    test1.moveZeroes(testNumbers);
    test2.moveZeroes(testNumbers2);
}