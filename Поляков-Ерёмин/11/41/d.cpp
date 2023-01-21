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
        
        
    vector <int> a, b;
    for (int i = 0; i < v.size()/2; ++i) {
        a.push_back(v[i]);
    }
    for (int i = v.size()/2; i < v.size(); ++i) {
        b.push_back(v[i]);
    }
    
    for (auto i = a.rbegin(); i < a.rend(); ++i)
        fout << *i << " ";
    for (auto i = b.rbegin(); i < b.rend(); ++i)
        fout << *i << " ";

    return 0;
}