#include<bits/stdc++.h>

using namespace std;

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %d: %lld", x, y)
#define NL printf("\n")
#define nl '\n'
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define per(i,j,k) for(int i = j; i > k; i--)

#define PI acos(-1.0)
#define eps 1e-9

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()
//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

#define debug(args...) {dbg,args; cout<<endl;}

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cout<<v<<" ";
        return *this;
    }
}dbg;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

char key[1111], a[1111], grid[11][11];
bool chq[333];
vector<string> msg, cipher;

void build(){
    clr(chq);
    int r = 0, c = 0;

    vector<char> v;
    v.clear();
    int len = ssz(key);

    rep(l,len){
        if(!chq[ key[l] ] and isalpha(key[l])){
            chq[ key[l] ] = 1;
            v.pb(key[l]);
        }
    }

    for(auto i : v){
        grid[r][c] = i;
        c++;
        if(c >= 5) c = 0, r++;
    }

    FOR(l, 'a', 'z'+1){
        if(!chq[l] and l != 'q'){
            grid[r][c] = l;
            c++;
            if(c >= 5) c = 0, r++;
        }
    }

    msg.clear();
    cipher.clear();
    string s = "";
    len = ssz(a);

    rep(l,len) if(isalpha(a[l])) s += a[l];
    int i = 0;

    while(i < sz(s)){
        string x = "";
        x += s[i];
        if(i + 1 >= sz(s) or s[i] == s[i+1]) x += 'x';
        else x += s[i + 1], i++;
        msg.pb(x);
        i++;
    }
}

PII getP(char c){
    rep(l,5){
        rep(i,5){
            if(grid[l][i] == c)
                return mp(l,i);
        }
    }
}

void encrypt(){
    for(auto i : msg){
        PII f = getP(i[0]);
        PII s = getP(i[1]);

        if(f.xx == s.xx){
            f.yy++;
            if(f.yy >= 5) f.yy = 0;
            s.yy++;
            if(s.yy >= 5) s.yy = 0;
            string x = "";
            x += grid[f.xx][f.yy];
            x += grid[s.xx][s.yy];
            cipher.pb(x);
        }

        else if(f.yy == s.yy){
            f.xx++;
            if(f.xx >= 5) f.xx = 0;
            s.xx++;
            if(s.xx >= 5) s.xx = 0;
            string x = "";
            x += grid[f.xx][f.yy];
            x += grid[s.xx][s.yy];
            cipher.pb(x);
        }

        else{
            swap(f.yy,s.yy);
            string x = "";
            x += grid[f.xx][f.yy];
            x += grid[s.xx][s.yy];
            cipher.pb(x);
        }
    }
}

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;FO;

    int t = 0, z = 0, len;
    int n = 0, k = 0, m = 0; int ans = 0;

    si(t);
    char x;
    scanf("%c",&x);

    while(t--){
        gets(key);
        gets(a);

        build();
        encrypt();

        string s = "";
        for(auto i : cipher) s += i;
        rep(l,sz(s)) s[l] = toupper(s[l]);
        cout << s << nl;
    }

    return 0;
}
