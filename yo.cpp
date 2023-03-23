#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define lli long long int
typedef tree<pair<lli, lli>, null_type, less<pair<lli, lli>>, rb_tree_tag, tree_order_statistics_node_update> omultiset; // store ind on sec
typedef tree<lli, null_type, less<lli>, rb_tree_tag, tree_order_statistics_node_update> oset;
typedef tree<lli, null_type, greater<lli>, rb_tree_tag, tree_order_statistics_node_update> oset1; // decreasing
typedef tree<pair<lli, lli>, null_type, greater<pair<lli, lli>>, rb_tree_tag, tree_order_statistics_node_update> omultiset1;
/*
    member functions :
                1. order_of_key(k) : number of elements strictly lesser than k
                2. find_by_order(k) : k-th element in the set (counting from zero)
*/
#define inf 1e18
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define bpc               __builtin_popcount
#define rep(i,a,b)        for(lli i=a;i<b;i++)
#define per(i,a,b)        for(lli i=a;i>=b;i--)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define fi                first
#define se                second
// #define sz(x)             (int)((x).size())
#define all(x)            (x).begin(),(x).end()
#define alr(s)            s.rbegin(),s.rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define vi vector<lli>
#define vpi vector<pair<lli,lli>>
#define pi pair<lli,lli>
#define vppi vector<pair<pair<lli,lli>,lli>>
#define pq_max priority_queue<lli>
#define pqp_max priority_queue<pi>
#define pq_min priority_queue<lli, vector<lli>, greater<lli>>
#define pqp_min priority_queue<pi, vector<pi>, greater<pi>>
#define m_pi              3.141592653589793238
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
lli lcm(lli a,lli b)
{
    return (a*b)/gcd(a,b);
}
lli is_power_of_two(int a)
{
    return a && (!(a & (a - 1)));
}
bool isSquare(lli x)
{
    lli y = sqrt(x);
    return y * y == x;
}
// void sieve()
// {

//     for (int p = 2; p * p <= 2e8; p++)
//     {

//         if (prime[p] == true)
//         {

//             for (int i = p * p; i <= 2e8; i += p)
//                 prime[i] = false;
//         }
//     }

// }

lli power(lli x, lli n)
{
    lli result, y;
    if(x == 0)
        return 0;
    if(n == 0)
        return 1;
    if(x == 1)
        return 1;
    y = power(x, n / 2);
    result = (y * y);
    if(n % 2 == 1)
        result = (result * x) ;
    return result;
}
lli leftmostsetbit(lli n)
{
    lli k = (int)(log2(n));
    return k;
}
lli rightmostsetbit(lli n)
{
    return log2(n & (~(n - 1)));
}
/*
struct compare{
    bool operator()(const pair<lli,lli>& x,const pair<lli,lli>& y)const{ //pass datatypes here
    //write conditions here
        if(x.fi<y.fi) return true;
        else if(x.fi>y.fi) return false;
        else return (x.se>y.se);
    }
};*/
void precalc()
{   

}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(auto&e:a)cin>>e;
    long long ans=0;
    if((n-2)%2==1){
        for(int i=1;i<n-1;i+=2)ans+=max(0,max(a[i-1],a[i+1])+1-a[i]);
    }else{
        ans=1e18;
        long long ans2=0;
        int R=n;
        while(R-2>0){
            R-=2;
            ans2+=max(0,max(a[R-1],a[R+1])+1-a[R]);
        }
        cout<<ans<<" "<<ans2<<endl;
        ans=min(ans,ans2);
        lli xx = 0, y = ans2;
        for(int i=1;i<n-1;i+=2){
            ans2-=max(0,max(a[R-1],a[R+1])+1-a[R]);
            R+=2;
            ans2+=max(0,max(a[i-1],a[i+1])+1-a[i]);
            cout<<ans2<<endl;
            ans=min(ans,ans2);
        }
    }cout<<ans<<"\n";
}     
int main()
{
    fio;
    precalc();
    //cout << fixed << setprecision(10);
    //Things that can lead to TLE:
    // 1) Not using fio
    // 2) Using endl instead of '\n'
    // 3) Using lli everywhere instead of int
    // 4) Using memset instead of manually setting dp values to -1
    lli t = 1;
    cin >> t;
    while(t--)
    {
        solve();
        //cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    }
}