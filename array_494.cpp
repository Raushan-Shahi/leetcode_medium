#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void target_check(vector<int> &nums, int target, int n, long long ans, int i, int &res)
{
    if (i == n)
    {
        if(ans == target){
            res++;
        }-
        return;
    }
    ans += nums[i];
    target_check(nums, target, n, ans, i + 1, res);
    ans = ans - (2 * nums[i]);
    target_check(nums, target, n, ans, i, res);
}

class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int res = 0;
        target_check(nums, target, n, 0, 0, res);
        return res;
    }
};
