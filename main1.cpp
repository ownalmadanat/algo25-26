#include <array>
#include <iostream>
using namespace std;

const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    for (int i = 0; i < nrrows; i++) {
        for (int j = 0; j < nrcolumns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    for (int i = 0; i < nrrows; i++) {
        for (int j = 0; j < nrcolumns; j++) {
            cin >> arr[i][j];
        }
    }
}

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> matrix;
    fillArray(matrix, 5, 4);
    printArray(matrix, 5, 4);
    return 0;
}

