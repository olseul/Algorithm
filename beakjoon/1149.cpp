#include <iostream>
#include <algorithm>
using namespace std;

int N;
int DP[1001][3] = { 0, };

int main() 
{
    cin >> N;
    for (int i = 1; i <= N; i++) 
    {
        cin >> DP[i][0] >> DP[i][1] >> DP[i][2];

        DP[i][0] += min(DP[i - 1][1], DP[i - 1][2]); 
        DP[i][1] += min(DP[i - 1][0], DP[i - 1][2]); 
        DP[i][2] += min(DP[i - 1][0], DP[i - 1][1]); 
    }
    cout << min(DP[N][0], min(DP[N][1], DP[N][2]) );
    return 0;
}