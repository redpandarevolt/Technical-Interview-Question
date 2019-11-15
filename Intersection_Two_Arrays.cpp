//
// Created by marcela gomez on 2019-10-23.
//

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> v3;
        if(nums1.size() == 0 || nums2.size() == 0)
        {
            return v3;
        }

        v3.resize(nums1.size() + nums2.size());

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int>::iterator it = set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v3.begin());

        v3.resize(it-v3.begin());
        cout << "Same numbers are: " << v3 << endl;
        return v3;
    }
};

void main
{

        Solution findSameNumbers;
        vector<int> testNumbers1 {1,9,2,8,4,9,6,1,4,8,2};
        vector<int> testNumbers2 {1,11,42,878,14,9,26,11,34,8,2};

        findSameNumbers.intersect(testNumbers1, testNumbers2);
};