#include <bits/stdc++.h>
using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ccase(t) "Case #" << t << ": "
#define lp(i,x,sz) for(int i=x;i<sz;i++)
#define ll long long

const int N = 1e5 + 10;
const int inf = 2147483647; // = INT_MAX




void RadheRadhe(int t,bool kavya2719 = 1){
   int sz; string s;
   cin >> sz >> s;
   
   bool f=0; int ct=0;
   for(int i=sz-1;i>=0;i--){
     if(s[i]=='0') f=1;
     if(s[i]=='1' && f){ct++; f=0;}
   }
   
   cout << ct << "\n";
}


void phle_ka_kaam(){
   
}


int main()
{
    iofast();
    phle_ka_kaam();
    
    int TTTT=1;
    cin >> TTTT;
    for(int i=1;i<=TTTT;i++)
       RadheRadhe(i);
}
