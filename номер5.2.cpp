#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void x(string &s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A')
			 s[i] = 'a';
		if (s[i] == 'E')
			 s[i] = 'e';
		if (s[i] == 'Y')
			s[i] = 'y';
		if (s[i] == 'U')
			 s[i] = 'u';
		if (s[i] == 'I')
			 s[i] = 'i';
		if (s[i] == 'O')
			 s[i] = 'o';
	}
}
int main() {
	string strk("AAAKYYYPUUUVIIINOOOBEEE AEYUIO"); 
  x(strk);
	bool k = false;	if (strk == "aaaKyyyPuuuViiiNoooBeee aeyuio" )
	  k = true;
	if (!k)
		cout << "not ok" << endl;
	else
		cout << "ok" << endl;
  return 0;
}
