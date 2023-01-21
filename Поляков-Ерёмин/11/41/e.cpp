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
        
    switch (v.size() & 1) {
        case 1:
            fout << v[v.size()/2];
            break;
        case 0:
            fout << v[v.size()/2-1] << " " << v[v.size()/2];
            break;
    }

    return 0;
}