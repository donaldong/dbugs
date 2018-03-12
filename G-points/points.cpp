#include <iostream>
#include <vector>
using namespace std;

int max_index(vector<int> &nums, int beg, int end) {
   if (beg == end) return end;
   int mid = (beg + end) / 2;
   int max_left = max_index(nums, beg, mid);
   int max_right = max_index(nums, mid, end);
   if (nums[max_left] > nums[max_right]) return max_right;
   return max_left;
}

int main() {
    vector<int> nums = {1, 3, 11, 7, 5, 6, 4, 9};
    cout << max_index(nums, 0, nums.size()) << endl;
    return 0;
}
