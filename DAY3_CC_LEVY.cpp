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

const int inf = 2147483647; // = INT_MAX

int n = 10010;

vector<bool> v(n,true);

vector<int> prime;

void RadheRadhe(int t,bool kavya2719 = 1){

        int sz;

        cin >> sz;

        

        int ct=0;

        

        if(sz&1){

            for(auto &val : prime){

                if(val > sz) break;

                int num = sz - val;

                if(v[num/2]) ct++;

            }

        }else{

            if(v[sz/2 - 1]) ct++;

        }

        

        cout << ct << "\n";

}

void phle_ka_kaam(){

  

    v[0]=v[1]=0;

    for(int i=2;i<n;++i){

        if(v[i])

        for(int j=i*2;j<n;j+=i){

            if(v[j]) v[j]=0;

        }

    }

    

    for(int i=3;i<n;i+=2) if(v[i]) prime.push_back(i);

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
