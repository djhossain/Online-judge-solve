#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

    char c;
    int i,j;
    c='#';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(;j<=n;j++)
            cout<<c;
        cout<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

