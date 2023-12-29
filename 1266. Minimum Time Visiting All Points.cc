#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 0 ; i < points.size() - 1; i++){
            int xDiff = abs(points[i][0] - points[i + 1][0]);
            int yDiff = abs(points[i][1] - points[i + 1][1]);
            ans += max(xDiff, yDiff);
        }

        return ans;
    }
};