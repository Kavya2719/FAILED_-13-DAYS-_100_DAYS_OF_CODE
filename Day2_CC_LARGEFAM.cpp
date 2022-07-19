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

   int sz,zeroct=0;

   cin >> sz;

   

   vector<int> v(sz);

   for(auto &val : v){

      cin >> val;

      if(!val) zeroct++;

   }

   

   sort(all(v));

   

   int ct=zeroct,ans=zeroct,i;

   for(i=zeroct;i<sz;i++){

     if(ct<v[i]) break;

     ct -= v[i];

     ans++;

   }

   

   ct*=-1;

   ct += zeroct;

   for(;i<sz;i++){

     if(ct+v[i]>=sz) break;

     ct += v[i];

     ans++;

   }

   

   cout << ans << "\n";

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

