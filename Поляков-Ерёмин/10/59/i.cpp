#include <iostream>
using namespace std;
void bin(int n)
{
	if(n==0)
	    return;
	bin(n/2);
	if(n>0)
	    cout << n%2;
	else
	    cout << (-1)*n%2;
}
int main()
{
	int N; cin >> N;
	if(N<0)
	    cout << '-';
	bin(N);
	if (!N)
        cout << 0;
}
