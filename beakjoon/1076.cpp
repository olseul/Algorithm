#include <iostream>
#include <string>
using namespace std;
int main() {
    string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
    string str;
    int mem[3];
    long long val = 0;

    for (int i = 0; i < 3; ++i) {
        cin >> str;
        for (int j = 0; j < 10; ++j) {
            if (color[j] == str) mem[i] = j;
        }
    }

    val = mem[0] * 10 + mem[1];
    for (int i = 0; i < mem[2]; ++i) val *= 10;
    cout << val << endl;

    return 0;
}