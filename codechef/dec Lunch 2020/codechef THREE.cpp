#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

#define DN          int main()
#define li          long long int
#define test()      int t;cin>>t;while(t--)
#define fast()      ios_base::sync_with_stdio(false);cin.tie(NULL);

#define mx          100005
#define spc         ' '
#define nn          "\n"

#define ff(s,e)         for(i=s;i<e;i++)
#define bf(s,e)         for(i=s;i>e;i--)
#define ff2(j,s,e,r)    for(j=s;j<e;j+=r)
#define bf2(j,s,e,r)    for(j=s;j>e;j-=r)


void inline inout()
{
    #ifndef ONLINE_JUDGE
    freopen("G:/C programing/Online judges/input.txt","r",stdin);
    freopen("G:/C programing/Online judges/output.txt","w",stdout);
    #endif
}


DN
{
    fast();
    //inout();

    int mapi[26],i,s,m,x;
    char inp[100005];

    test(){
        cin>>inp;
        ff(0,26)
            mapi[i]=0;
        for(i=0;inp[i]!='\0';i++){
            mapi[inp[i]-'a']++;
        }
        s=0;
        m=0;
        ff(0,26){
            s+=(mapi[i]/2);
            m+=(mapi[i]%2);
        }

        if(s>m){
            x=(s-m)/3;
            if((s-m)%3!=0)
                x++;
            s-=x;
        }

        cout<<s<<nn;
    }
    return 0;
}
