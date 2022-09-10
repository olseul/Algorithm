#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    long long loap[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> loap[i];
    }
    sort(loap, loap + n); 
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (res < loap[i] * (n - i)) {
            res = loap[i] * (n - i); 
        }
    }
    cout << res;
	return 0;
}