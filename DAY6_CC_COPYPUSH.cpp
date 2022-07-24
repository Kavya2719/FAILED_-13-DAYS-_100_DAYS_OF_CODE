// SORRY FOR LATE SUBMISSION HERE
// I ACTUALLY DID PRACTICE YESTERDAY, JUST FORGOT TO UPLOAD HERE!
// PROOF - https://twitter.com/Kavya2719/status/1550909303535845378?t=EF16sBL8F_oTgocAgeQdvQ&s=19

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
   
   int l=sz; bool f=0;
   while(l>0){
     if(l&1) l--;
     else{
       for(int i=0;i<l/2;++i){
         if(s[i]!=s[l/2+i]){f=1; break;}
       }
       if(f) break;
       l/=2;
     }
   }
   
   if(f) no;
   else yes;
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
