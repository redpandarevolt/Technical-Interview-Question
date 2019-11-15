//
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >=0; i--)
        {
            //check for a 9
            if(digits[i] == 9)
            {

                if(i != 0)
                    digits[i] = 0;
                else
                {
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
            }
                //if digit is not a 9, add one and return
            else{ digits[i] += 1; return digits;}
        }
        return digits;
    }
};

int main()
{
    Solution test1:
    Solution test2:

    vector<int> testNumbers {1,2,3};
    vector<int> testNumbers2 {4,3,2,1};

    test1.plusOne(testNumbers);
    test2.plusOne(testNumbers2);
}