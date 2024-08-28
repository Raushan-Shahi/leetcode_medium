#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        int count =1, n = grid.size();
        int i =0, j =0;
        if(grid[0][0] !=0)
            return false;
        while(count <= (n*n) -1){
            if(i+2 < n && j+1 <n && grid[i+2][j+1] == count){
                i = i+2;
                j = j+1;
            }
            else if(i+1 < n && j+2 <n && grid[i+1][j+2] == count){
                i = i+1;
                j = j+2;
            }
            else if(i-1 >=0 && j+2 <n && grid[i-1][j+2] == count){
                i = i-1;
                j = j+2;
            }
            else if(i-2 >=0 && j+1 <n && grid[i-2][j+1] == count){
                i = i-2;
                j = j+1;
            }
            else if(i+2 <n && j-1 >=0 && grid[i+2][j-1] == count){
                i = i+2;
                j = j-1;
            }
            else if(i+1 <n && j-2 >=0 && grid[i+1][j-2] == count){
                i = i+1;
                j = j-2;
            }
            else if(i-1 >=0 && j-2 >=0 && grid[i-1][j-2] == count){
                i = i-1;
                j = j-2;
            }
            else if(i-2 >=0 && j-1 >=0 && grid[i-2][j-1] == count){
                i = i-2;
                j = j-1;
            }
            else{
                return false;
            }
            count++;
        }
        return true;
    }
};

int main()
{

    return 0;
}