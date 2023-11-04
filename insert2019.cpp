#include <iostream>
#include <fstream>
#define NMAX 499
#define LGMAX (NMAX+1)*2
using namespace std;
ifstream fin("numere.in");
int main()
{
    int n, i, v[LGMAX], j;
    fin >> n;
    for (i = 0; i < n; i++) fin >> v[i];
    for (i = 0; i < n; i++)
    {
        if (v[i]%2 == 0)
        {
            for (j = n; j > i+1; j--) v[j] = v[j-1];
            v[i+1] = 2019;
            n++, i++;
        }
    }
    for (i = 0; i < n; i++) cout << v[i] << ' ';
    return 0;
}
