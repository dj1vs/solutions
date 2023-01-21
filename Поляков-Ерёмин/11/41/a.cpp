#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    fstream fout("output.txt");
    fstream fin("input.txt");
    
    int n;
    vector <int> v;
    
    fin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        fin >> v[i];
        
    sort(v.begin(), v.end());
        
    for(int i = 0; i < n; ++i)
        fout << v[i] << " ";

    return 0;
}