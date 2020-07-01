#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream f ("date.in");

    int n;
    f>>n;

    int *a;
    a = (int*) malloc (n * sizeof(int));

    int i;
    for (i = 0; i < n; i++)
        f>>a[i];

    int j;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if(a[i] - a[j] == -1)
                cout<<i<<"-"<<j<<endl;
            else if(a[i] - a[j] == 1)
                cout<<j<<"-"<<i<<endl;
        }

}
