/*
 * @lc app=leetcode.cn id=11 lang=cpp
 * @lcpr version=30202
 *
 * [11] 盛最多水的容器
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
    int maxArea(vector<int>& height) {
        int n = (int)height.size();
        int l = 0, r = n - 1;
        int maxn = 0;
        while(l < r){
            if(height[l] <= height[r]){
                maxn = max(maxn, height[l] * (r - l));
                l ++ ;
            }
            else{
                maxn = max(maxn, height[r] * (r - l));
                r -- ;
            }

            
        }
        return maxn;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,8,6,2,5,4,8,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,1]\n
// @lcpr case=end

 */

