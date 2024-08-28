#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    static bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.first < b.first;
    }

public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        int n = costs.size(), sol = 0;
        vector<pair<int, int>> pr;

        for (int i = 0; i < costs.size(); i++)
            pr.push_back({costs[i][0] - costs[i][1], i});

        sort(pr.begin(), pr.end(), comp);

        for (int i = 0; i < n / 2; i++)
            sol += costs[pr[i].second][0];
        for (int i = n / 2; i < n; i++)
            sol += costs[pr[i].second][1];

        return sol;
    }
};

int main()
{

    return 0;
}