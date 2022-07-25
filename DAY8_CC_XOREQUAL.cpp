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

int binExp(int a ,int b){

  int ans=1;

  while(b){

    if(b&1) ans = (ans*1ll*a)%M;

    a=(a*1ll*a)%M;

    b>>=1;

  }

  return ans;

}

void RadheRadhe(int t,bool kavya2719 = 1){

   int sz;

   cin >> sz;

   

   int ans = binExp(2,sz-1);

   cout << ans << '\n';

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
