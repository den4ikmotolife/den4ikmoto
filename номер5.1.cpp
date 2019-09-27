#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
string worlds(string s, int g[6])
{
	for (int i = 0; i < 6; i++)
		g[i] = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
			g[0]++;
			
		if (s[i] == 'e')
			g[1]++;
			
		if (s[i] == 'y')
			g[2]++;
			
		if (s[i] == 'u')
			g[3]++;
			
		if (s[i] == 'i')
			g[4]++;
			
		if (s[i] == 'o')
			g[5]++;
	}
	return s;
}

int main() {
	string strk("asdfg eght ykhji yukiohi");
	int mas[6];
	worlds(strk, mas);
	cout << strk << endl;
	cout << "test 1: ";
	if (mas[0] == 1 && mas[1] == 1 && mas[2] == 2 && mas[3] == 1 && mas[4] == 3 && mas[5] == 1)
	{
		cout << "ok" << endl;
	}
	else {
		cout << "not ok" << endl;
	}
	string result(" ");
	worlds(result, mas);
	cout << "test 0: ";
	if (mas[0] == 0 && mas[1] == 0 && mas[2] == 0 && mas[3] == 0 && mas[4] == 0 && mas[5] == 0)
	{
	  cout << "ok" << endl;
	}
	else {
	  cout << "not ok" << endl;
	}
	return 0;
}
