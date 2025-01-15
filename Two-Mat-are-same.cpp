#include <iostream>
#include <vector>
#include <algorithm> // for reverse()

using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

// Function to check if two matrices are the same
bool isSame(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size();
    int m = mat[0].size();
    if (mat.size() == target.size() && mat[0].size() == target[0].size()) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] != target[i][j]) {
                    return false;
                }
            }
        }
    } else {
        return false;
    }
    return true;
}

// Function to check if the target matrix can be obtained by rotating the input matrix
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for (int i = 0; i < 4; i++) {
        if (isSame(mat, target)) {
            return true;
        }
        rotate(mat);
    }
    return false;
}

int main() {
    // Example matrices
    vector<vector<int>> mat = {
        {0, 1},
        {1, 0}
    };

    vector<vector<int>> target = {
        {1, 0},
        {0, 1}
    };

    // Check if target can be obtained by rotating mat
    if (findRotation(mat, target)) {
        cout << "Target matrix are same after rotation of original matrix" << endl;
    } else {
        cout << "Target matrix are not same after rotation of original matrix" << endl;
    }

    return 0;
}
