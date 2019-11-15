// Leet code Question: Rotate Array
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        //int originalSize = nums.size();

        if(nums.empty() || (k %= nums.size()) == 0)
        {
            return;
        }
        int n = nums.size();
        int reps = abs(n-k);
        for( int i = 0; i < reps; i++)
        {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};


int main()
{
    Solution test1:
    Solution test2:

    vector<int> testNumbers {1,2,3,4,5,6,7};
    vector<int> testNumbers2 {-1,-100,3,99};

    test1.rotate(testNumbers, 3);
    test2.rotate(testNumbers2, 2);
}