//
// Created by marcela gomez on 2019-11-01.
//

class Solution {
public:
    int MinimumCoins(vector<int>& nums, target) {

        nums.sort();
        int coins = 0;
        int remainder = 0;

        int coins = 0;
        for(int i = nums.size() - 1, i = 0; i--) {
            if (target % nums[i] == 0)
            {
                coins += target/nums[i];
            }
            coins += target/nums[i];
            remainder = target%nums[i];
            target = remainder;
        }
        return coins;

    }
};




int main()
{
    Solution test1:
    Solution test2:
    vector<int> testNumbers {1,3,5};

    test1.MinimumCoins(testNumbers);

}
