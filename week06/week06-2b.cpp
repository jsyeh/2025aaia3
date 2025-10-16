// week06-2b.cpp
// SOIT106_ADVANCE_009
#include <iostream>
using namespace std;
void f(int n)
{
	if(n==0) return;
	//printf("now n:%d and skin:%d\n",n,n%10);
	cout << n%10;
	f(n/10);
}
int main()
{
	int n;
	cin >> n;
	f(n);
	cout << "\n";
}
