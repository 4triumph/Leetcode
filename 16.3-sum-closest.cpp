/*
 * @lc app=leetcode.cn id=16 lang=cpp
 * @lcpr version=30202
 *
 * [16] 最接近的三数之和
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
    int threeSumClosest(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        sort(nums.begin(), nums.end());
        int len = (int)nums.size();
        int minn = 0x3f3f3f3f;
        int ans = 0;

        for(int i = 0; i < len - 2; i ++ ){
            int x = nums[i];
            if(i && x == nums[i - 1]) continue;

            int s = x + nums[i + 1] + nums[i + 2];
            if(s > target){
                if(s - target < minn) ans = s;
                break;
            }
            s = x + nums[len - 2] + nums[len - 1];

            if(s < target){
                if(target - s < minn){
                    minn = target - s;
                    ans = s;
                }
                continue;
            }

            int j = i + 1, k = len - 1;
            while(j < k){
                s = x + nums[j] + nums[k];
                if(s == target) return target;
                if(s > target){
                    if(s - target < minn){
                        minn = s - target;
                        ans = s;
                    }
                    k -- ;
                }
                else{
                    if(target - s < minn){
                        minn = target - s;
                        ans = s;
                    }
                    j ++ ;
                }
            }

        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [-1,2,1,-4]\n1\n
// @lcpr case=end

// @lcpr case=start
// [0,0,0]\n1\n
// @lcpr case=end

 */

