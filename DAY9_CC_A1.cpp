#include <bits/stdc++.h>

using namespace std;

#define iofast() ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ff first

#define ss second

#define all(v) v.begin(),v.end()

#define yes cout << "Yes\n"

#define no cout << "No\n"

#define ccase(t) "Case #" << t << ": "

#define lp(i,x,sz) for(int i=x;i<sz;i++)

#define ll long long

const int N = (int)1e5 + 10;

const int inf = (int)1e9+10;

const int M = (int)1e9 + 7;

vector<int> v;

int ct;

int find(int hi,int req){

  int mid , lo=0;

  while(hi-lo>1){

    mid=(hi+lo)/2;

    if(v[mid] <= req) lo=mid;

    else hi=mid-1;

   }

   if(v[hi]<=req) return hi;

   if(v[lo]<=req) return lo;

   return -1;

}

bool chk(int req,int i=v.size()-1){

  if(i<0) return 0;

  if(req==v[i]) return 1;

  if(i==0) return 0;

  

  ct++;

  

  int ind = find(i-1,req-v[i]);

  if(ind!=-1){

   // cout << req << " ";

   if(chk(req-v[i],ind)) return 1;

  }

  

//  cout << req << " ";

  if(v[i] > req) ind = find(i-1,req);

  else ind = i-1;

  if(ind!=-1){

    if(chk(req,ind)) return 1;

  }

  

  return 0;

}

void RadheRadhe(int t,bool kavya2719 = 1){

   int sz,m;

   cin >> sz >> m;

   

   v = vector<int>(sz,0);

   for(auto &val : v) cin >> val;

   

   sort(all(v));

   while((*(--v.end())) > m) v.pop_back();

   

   

   if(chk(m)) yes;

   else no;

  // cout << ct;

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

