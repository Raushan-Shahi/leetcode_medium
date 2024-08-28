#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int prev = nums[0], sol = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - prev > k)
            {
                sol++;
                prev = nums[i];
            }
        }
        return sol;
    }
};

int main()
{

    return 0;
}