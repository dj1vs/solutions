#include <iostream>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    printf("%d+%d+%d=%d\n", a, b, c, a+b+c);
    printf("%d*%d*%d=%d\n", a, b, c, a*b*c );
    printf("(%d+%d+%d)/3=%.3f", a, b, c, static_cast<double>(a+b+c)/3.0);
}