#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    pair<int, int> searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return {-1, -1};
        }

        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        while (start <= end) {  
            int mid = start + (end - start) / 2;
            int element = matrix[mid / col][mid % col];

            if (element == target) {
                return {mid / col, mid % col};
            } else if (element < target) {
                start = mid + 1;
            } else { 
                end = mid - 1;
            }
        }

        return {-1, -1};
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 34;

    Solution s;
    auto result = s.searchMatrix(matrix, target);
    
    if (result.first != -1) {
        cout << "Found at index (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
