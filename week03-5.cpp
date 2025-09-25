// SOIT106_ADVANCE_007
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	if(a[0]==a[3] && a[1]==a[2]) cout << "YES\n";
	else cout << "NO\n";
}
