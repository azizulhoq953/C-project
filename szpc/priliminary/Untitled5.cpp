#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;
string encryption(string& input) {
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    int size = input.length();
    int lowerbound = (int) floor(sqrt(size));
    int upperbound = (int) ceil(sqrt(size));
    int total = upperbound * lowerbound;

    while (total < size) {
        if (lowerbound < upperbound) {
            ++lowerbound;
        } else {
            ++upperbound;
        }
        total = upperbound * lowerbound;
    }

    char grid[lowerbound][upperbound] = {0};
    int index = 0;

    for (int row = 0; row < lowerbound; ++row) {
        for (int col = 0; col < upperbound; ++col) {
            if (index <= input.length() - 1) {
                grid[row][col] = input.at(index);
                ++index;
            }
        }
    }

    string encrypted = "";

    for (int col = 0; col < upperbound; ++col) {
        for (int row = 0; row < lowerbound; ++row) {
            if (grid[row][col] != 0) {
                encrypted += grid[row][col];
            }
        }

        if (col != upperbound - 1) {
            encrypted += " ";
        }
    }

    return encrypted;
}
int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;

    getline(cin, s);
    string result = encryption(s);
    fout << result << "\n";
    fout.close();
    return 0;
}
