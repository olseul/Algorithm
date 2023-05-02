#include <iostream>
#include <string>
#include <algorithm> // reverse함수를 사용하기 위한 헤더파일
using namespace std;

int main() {
    string input;
    cin >> input;
    
    string ans = "{"; // 아스키코드 값이 가장 크다.
    int len = input.size();
    
    for (int i = 1; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            string s1 = input.substr(0, i);
            string s2 = input.substr(i, j - i);
            string s3 = input.substr(j);
            
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());
            
            string temp = s1 + s2 + s3;
            
            if (temp < ans) {
                ans = temp;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
