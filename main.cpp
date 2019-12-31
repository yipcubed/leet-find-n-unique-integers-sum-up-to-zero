#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  vector<int> sumZero(int n) {
    vector<int> result(n);
    if (n == 1)
      return result;
    int counter = 1;
    for (int i = 0; i < n-1; i = i + 2) {
      result[i] = counter;
      result[i + 1] = -counter;
      ++counter;
    }
    return result;
  }
};

void test1() {
  int n = 6;

  cout << "-7,-1,1,3,4 ? " << Solution().sumZero(n) << endl;
}

void test2() {

}

void test3() {

}