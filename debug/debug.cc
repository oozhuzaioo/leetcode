#include<iostream>
#include<vector>
using namespace std;
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    if (matrix.size() == 0) {
        return false;
    }
    int row = matrix.size() - 1;
    int column = 0;
    while (row>=0 && column<matrix[0].size()) {
        if (target == matrix[row][column]) {
            return true;
        } else if (target < matrix[row][column]) {
            row--;
            continue;
        } else if (target > matrix[row][column]) {
            column++;
            continue;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = vector<vector<int>>(5, vector<int>(5)) = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 20;
    findNumberIn2DArray(matrix, target);
}