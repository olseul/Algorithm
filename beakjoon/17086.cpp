#include <iostream>
#include <queue>
using namespace std;

struct shark {
    int x, y;
};

int n, m, ans;
int a[50][50];
const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
const int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
queue<shark> q;

void bfs() {
    while (!q.empty()) {
        int x = q.front().x, y = q.front().y; q.pop();
        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (!a[nx][ny]) {
                q.push({ nx, ny });
                a[nx][ny] = a[x][y] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j]) q.push({ i, j });
        }
    }
    bfs();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ans < a[i][j]) ans = a[i][j];
        }
    }
    cout << ans - 1;
    return 0;
}