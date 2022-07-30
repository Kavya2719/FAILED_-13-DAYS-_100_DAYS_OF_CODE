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
   int sz;
   cin >> sz;
   
   vector<int> v(sz);
   /*map<int, vector<int>> m;
   
   for(int i=0;i<sz;++i){
     cin >> v[i];
     m[v[i]].push_back(i);
   }
   sort(all(v));
   
   int ind=-1,ct=0;
   bool vis[sz]={0};
   
   for(int i=0;i<sz;++i){
     bool f=1;
     for(auto &val : m[v[i]]){
       if(val < ind) continue;
       f=0;
       if(vis[val]) continue;
       ind = val;
       vis[val]=1;
      // cout << ind << " ";
       ct++;
     }
     if(f) break;
   }
   
   ind = -1;
   for(int i=0;i<sz;++i){
     bool f=1;
     for(auto &val : m[v[i]]){
       if(val < ind) continue;
       f=0;
       if(vis[val]) continue;
       ind = val;
       vis[val]=1;
      // cout << ind << " ";
       ct++;
     }
     if(f) break;
   }
   
  // cout << ct << " ";
   if(ct==sz) yes;
   else no;*/
     
  for(auto &val : v) cin >> val;
  vector<int> sorted=v,v2,v1;
  sort(all(sorted));
  for(int i=0,j=0;i<sz;++i){
    if(sorted[j]==v[i]){v1.push_back(v[i]); j++; }
    else v2.push_back(v[i]);
  }
  
  bool f=1;
  for(int i=0,j=0;i<sz;++i){
    if(i<v1.size()){
      if(sorted[i]==v1[i]);
      else{ f=0; break;}
    }
    else{
      if(sorted[i]==v2[j]) j++;
      else{ f=0; break;}
    }
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
