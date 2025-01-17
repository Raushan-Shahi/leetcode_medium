#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for(int i =0; i<queries.size(); i++){
            int count =0;
            for(int j=0; j<points.size(); j++){
                if((queries[i][0] - points[j][0])*(queries[i][0] - points[j][0]) + (queries[i][1] - points[j][1])*(queries[i][1] - points[j][1]) <= queries[i][2]* queries[i][2]){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};
