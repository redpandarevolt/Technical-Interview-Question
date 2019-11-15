// Isolate a single number form an array containing many duplicates
// Where the single number is left after removing the duplicates.
// Created by marcela gomez on 2019-10-23.
//

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate (nums.begin(), nums.end() , 0, bit_xor<int>());
    }
};

void main
{
    Solution solo1;
    vector<int> testNumbers {1,9,2,8,4,9,6,1,4,8,2};
    cout << solo1.singleNumber(testNumbers) << endl ;

};