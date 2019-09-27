#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdlib>
using namespace std;
int main() {
	    string s;
	    getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
	                   if (s[i] == 'A') {
                        s[i] = tolower(s[i]);
                     }
                       if (s[i] == 'E' ) {
                       s[i] = tolower(s[i]);
                     }
                       if (s[i] == 'O') {
                       s[i] = tolower(s[i]);
                     } 
                       if (s[i] == 'I') {
                       s[i] = tolower(s[i]);
                     } 
                       if (s[i] == 'U') {
                       s[i] = tolower(s[i]);
                     }
                       if (s[i] == 'Y') {
			                 s[i] = tolower(s[i]);
		             }
	}
	cout<<s<<endl;
	return 0;
}
