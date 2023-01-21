#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    fstream fout("output.txt");
    fstream fin("input.txt");
    
    vector <int> v;
    
    while (true) {
        int buf; fin >> buf;
        if (buf) {
            v.push_back(buf);
        } else {
            break;
        }
    }
        
    sort(v.begin(), v.end());
        
    for(int i = 0; i < v.size(); ++i)
        fout << v[i] << " ";

    return 0;
}