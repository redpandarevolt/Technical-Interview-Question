//
// Created by marcela gomez on 2019-11-14.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[i-1])
            {
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution test1:
    Solution test2:

    vector<int> testNumbers {7,1,5,3,6,4};
    vector<int> testNumbers2 {1,2,3,4,5};

    test1.maxProfit(testNumbers);
    test2.maxProfit(testNumbers2);
}