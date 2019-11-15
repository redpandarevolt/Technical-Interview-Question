// Leet Code Question: #26 Remove Duplicates from Sorted Array
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int r = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[r] != nums[i])
                nums[++r] = nums[i];
        }
        return r + 1;
    }
};

int main()
{
    Solution test1:
    Solution test2:
    vector<int> testNumbers {0,0,1,1,1,2,2,3,3,4};

    test1.removeDuplicates(testNumbers);

}