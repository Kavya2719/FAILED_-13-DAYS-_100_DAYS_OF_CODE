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

   int sz;

   cin >> sz;

   

   vector<int> v(sz);

   for(auto &val : v) cin >> val;

   

   vector<int> ans(sz+10,0),pos(sz+10,0);

   

   for(int i=0;i<sz;i++){

     int num = i-ans[v[i]]-pos[v[i]]+1;

    // cout << i << " " << ans[v[i]] << " " << pos[v[i]] << "\n";

     

       if(pos[v[i]]){

         if(num&1) ans[v[i]]++;

       } 

       else pos[v[i]] = i+1;

   }

   

   for(int i=1;i<=sz;i++){

     if(pos[i]) ans[i]++;

   }

   

   for(int i=1;i<=sz;i++) cout << ans[i] << " ";

   cout << "\n";

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

