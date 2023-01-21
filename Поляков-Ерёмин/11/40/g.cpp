#include <iostream>
#include <string>
#include <set>
using namespace std;


int main()
{
    string a;
    cin >> a;
    string f;
    f += a[0];
    cout << a[0];
    for(int i = 1; i < a.size(); ++i)
        if (f.find(a[i]) >= f.size())
        {
            cout << a[i];
            f += a[i];
        }
    return 0;
}