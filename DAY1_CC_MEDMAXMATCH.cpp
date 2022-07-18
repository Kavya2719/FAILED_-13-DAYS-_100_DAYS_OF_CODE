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

   

   vector<int> v1(sz),v2(sz);

   for(auto &val : v1) cin >> val;

   for(auto &val : v2) cin >> val;

   

   sort(all(v1),greater<int>());

   sort(all(v2),[](int a,int b){return a>b;});

   

   lp(i,0,sz/2){

     v1.pop_back();

     v2.pop_back();

   }

   reverse(all(v1));

   

   int mn=inf;

   for(int i=0;i<v1.size();i++){

     mn = min(mn,v1[i]+v2[i]);

   }

   

   cout << mn << "\n";

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
