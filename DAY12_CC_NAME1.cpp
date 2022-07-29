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

const int N = (int)1e5 + 10;

const int inf = (int)1e9+10;

const int M = (int)1e9 + 7;

void RadheRadhe(int t,bool kavya2719 = 1){

   string s1,s2;

   cin >> s1 >> s2;

   

   int par[26]={0},ch[26]={0};

   for(auto &val : s1) par[val-'a']++;

   for(auto &val : s2) par[val-'a']++;

   

   int sz;

   cin >> sz;

   while(sz--){

     string s;

     cin >> s;

     for(auto &val : s) ch[val-'a']++;

   }

   

   bool f=1;

   for(int i=0;i<26;i++){

     if(par[i] < ch[i]){f=0; break;}

   }

   

   if(f) yes;

   else no;

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
