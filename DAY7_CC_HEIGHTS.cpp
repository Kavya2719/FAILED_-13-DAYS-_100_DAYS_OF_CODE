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

   

   map<int,int> m;

   for(int i=0;i<sz;++i){

     int val;

     cin >> val;

     m[val]++;

   }

   

   int ct=0;

   for(auto &[val,freq] : m){

     if(freq==1) ct++;

   }

   

   int ans = ct/2 + ct%2;

   

   if(ct==1){

     int h1=0,h2=inf;

     for(auto &[val,freq] : m){

       if(freq==1) h1 = val;

       else if(freq==2) h2=val;

       else if(freq){ h1=0; break; }

     }

     if(h2<h1) ans++;

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
