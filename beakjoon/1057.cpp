#include<iostream>
using namespace std;
int main() {
	int n, kim, Lim;

	cin >> n >> kim >> Lim;
	
	int cnt = 1;
	while (1) {

		// ±è¾¾¿Í ÀÓ¾¾°¡ °Ü·ç°Ô µÉ ½Ã, ¹Ýº¹¹® Á¾·á
		if (!(kim % 2) && (Lim % 2)) { // ±è¾¾°¡ Â¦¼ö°í ÀÓ¾¾°¡ È¦¼ö
			if (Lim == (kim - 1)) {
				break;
			}
		}
		else if ((!(Lim % 2) && (kim % 2))) { // ÀÓ¾¾°¡ Â¦¼ö°í ±è¾¾°¡ È¦¼ö
			if (kim == (Lim - 1)) {
				break;
			}
		}

		// ±èÁö¹Î°ú ÀÓÇÑ¼öÀÇ ´ÙÀ½ ¶ó¿îµå ¹øÈ£
		if (kim % 2) kim = kim / 2 + 1; // ±è¾¾°¡ È¦¼ö
		else if (!(kim % 2)) kim = kim / 2; // ±è¾¾°¡ Â¦¼ö
		if (Lim % 2) Lim = Lim / 2 + 1; // ÀÓ¾¾°¡ È¦¼ö
		else if (!(Lim % 2)) Lim = Lim / 2; // ÀÓ¾¾°¡ Â¦¼ö

		// ¶ó¿îµå ¼ö Áõ°¡
		cnt++;
	}
	cout << cnt;
	return 0;
}