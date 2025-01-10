// We are solving the Spiral matrix problem here

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>> mat, int n, int m) {
    int top = 0;
    int left = 0;
    int bottom = n - 1;
    int right = m - 1;

    vector<int> result;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            result.push_back(mat[top][i]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            result.push_back(mat[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> mat = { 
        { 0, 1, 2, 0 },
        { 3, 4, 0, 2 },
        { 1, 3, 1, 5 },
        { 8, 9, 10, 11 } 
    };

    int n = mat.size();
    int m = mat[0].size();

    vector<int> ans = solve(mat, n, m);

    for (int val : ans) {
        cout << val << " ";
    }

    return 0;
}
