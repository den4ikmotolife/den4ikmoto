#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int z(string &s, int &o, int &e, int &i, int &a, int &u, int &y)
{
  for (int x = 0; x < s.length(); x++) {
                                if (s[x] == 'o')
                                o++;
                                if (s[x] == 'e')
                                e++;
                                if (s[x] == 'i')
                                i++;
                                if (s[x] == 'a')
                                a++;
                                if (s[x] == 'u')
                                u++;
                                if (s[x] == 'y')
                                y++;
								 } 
                                return o;
}

int main()
{
            string s;
            int o = 0,
            e = 0, 
            i = 0,
            a = 0, 
            u = 0, 
            y = 0;
            int x=0;
            getline(cin,s);
            s.length(); 
            z(s, o, e, i, a, u, y);
            cout << "o = " << o <<endl;
            cout << "e = " << e <<endl;
            cout << "i = " << i <<endl;
            cout << "a = " << a <<endl;
            cout << "u = " << u <<endl;
            cout << "y = " << y <<endl;
            return 0;
}
