/*
 * @lc app=leetcode.cn id=15 lang=cpp
 * @lcpr version=30202
 *
 * [15] 三数之和
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int len = (int)nums.size();
        for(int i = 0; i < len - 2; i ++ ){
            if(i && nums[i] == nums[i - 1]) continue;
            int k = len - 1;
            int target = -nums[i];
            for(int j = i + 1; j < len - 1; j ++ ){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                while(j < k && nums[j] + nums[k] > target) k -- ;
                if(j == k) break;
                if(nums[j] + nums[k] == target){
                    ans.push_back({nums[i], nums[j], nums[k]});
                }

            }

        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [-1,0,1,2,-1,-4]\n
// @lcpr case=end

// @lcpr case=start
// [0,1,1]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,0]\n
// @lcpr case=end

 */

