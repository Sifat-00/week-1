#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        cout << a+(a-1) << endl;
    }
    else if(b>a)
    {
        cout << b + (b-1) << endl;
    }
    else cout << a+b << endl;
    return 0;
}