/*
 * @lc app=leetcode.cn id=49 lang=cpp
 * @lcpr version=30202
 *
 * [49] 字母异位词分组
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        unordered_map<string, vector<string>> mp;
        for(auto &i : strs){
            string t = i;
            sort(t.begin(), t.end());
            //ranges::sort(t);
            mp[t].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto [x, y] : mp){
            ans.push_back(y);
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["eat", "tea", "tan", "ate", "nat", "bat"]\n
// @lcpr case=end

// @lcpr case=start
// [""]\n
// @lcpr case=end

// @lcpr case=start
// ["a"]\n
// @lcpr case=end

 */

