/*✅ Approach

Find the smallest and largest number in the array.

Create a complete range from min to max.

Check which numbers from that range are not in the given array.

Return them in a sorted vector. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i+1] != nums[i] + 1) {
                for(int j = nums[i] + 1; j < nums[i+1]; j++) {
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 4, 2, 5};
    vector<int> result = s.findMissingElements(nums);

    for(int n : result) {
        cout << n << " ";
    }

    return 0;
}
