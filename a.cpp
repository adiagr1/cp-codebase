#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define lli long long int
// typedef tree<pair<lli, lli>, null_type, less<pair<lli, lli>>, rb_tree_tag, tree_order_statistics_node_update> omultiset; // store ind on sec
// typedef tree<lli, null_type, less<lli>, rb_tree_tag, tree_order_statistics_node_update> oset;
// typedef tree<lli, null_type, greater<lli>, rb_tree_tag, tree_order_statistics_node_update> oset1; // decreasing
// typedef tree<pair<lli, lli>, null_type, greater<pair<lli, lli>>, rb_tree_tag, tree_order_statistics_node_update> omultiset1;
/*  
    member functions :
                1. order_of_key(k) : number of elements strictly lesser than k
                2. find_by_order(k) : k-th element in the set (counting from zero)     
*/
// #define inf 1e18
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
#define sz(x)             (int)((x).size())
#define all(x)            (x).begin(),(x).end()
#define alr(s)            s.rbegin(),s.rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define vi vector<lli>
#define vvi vector<vector<lli>>
#define vpi vector<pair<lli,lli>>
#define pi pair<lli,lli>
#define vppi vector<pair<pair<lli,lli>,lli>>
#define pq_max priority_queue<lli>
#define pqp_max priority_queue<pi>
#define pq_min priority_queue<lli, vector<lli>, greater<lli> >
#define pqp_min priority_queue<pi, vector<pi>, greater<pi> >
#define m_pi              3.141592653589793238
// #define endl "\n"
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
      
}
lli is_power_of_two(int a){
    return a && (!(a&(a-1)));
}
/*lli fast_mod_exp(lli a, lli b, lli m) {
    lli res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
 
        a = (a * a) % m;
        b = b >> 1;
    }
 
    return res;
}
 
lli mod_inverse(lli a, lli m) {
    return fast_mod_exp(a, m - 2, m);
}
lli ncr(lli n, lli r, lli p) {
    if (r == 0)
        return 1;
    if(r>n)
        return 0;
 
    return ((fact[n] * mod_inverse(fact[n - r], p)) % p * mod_inverse(fact[r], p)) % p;
}*/
bool isSquare(lli x){
  lli y=sqrt(x);
  return y*y==x;
}
/*void sieve()
{
    
    
 
    for (int p = 2; p * p <= 2e8; p++)
    {
        
        if (prime[p] == true) 
        {
            
            for (int i = p * p; i <= 2e8; i += p)
                prime[i] = false;
        }
    }
 
}*/

lli power(lli x,lli n,lli m){
    lli result,y;
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    y=power(x,n/2,m);
    result=(y*y)%m;
    if(n%2==1)
        result=(result*x)%m;
    return result;
}
lli leftmostsetbit(lli n){
    lli k = (int)(log2(n));
    return k;
}
lli rightmostsetbit(lli n){
    return log2(n&(~(n-1)));
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
/*lli a[N],seg[2*N];
void build(lli idx,lli low,lli high){
    if(low==high){
        seg[idx]=a[low];
        return;
    }
    lli mid=(low+high)/2;
    build(2*idx+1,low,mid);
    build(2*idx+2,mid+1,high);
    seg[idx] = (seg[2*idx+1]+seg[2*idx+2]);
}
lli query(lli idx,lli low,lli high,lli l,lli r){
    if(low>=l&&high<=r){
        return seg[idx];
    }
    if(high<l||low>r){
        return 0;
    }
    lli mid=(low+high)>>1;
    lli left = query(2*idx+1,low,mid,l,r);
    lli right = query(2*idx+2,mid+1,high,l,r);
    return (left+right);
}
void update(lli idx,lli low,lli high,lli node,lli val){
    if(low==high){
        seg[idx]=val;
        return;
    }
    lli mid = (low+high)>>1;
    if(node<=mid&&node>=low) update(2*idx+1,low,mid,node,val);
    else update(2*idx+2,mid+1,high,node,val);
    seg[idx]=seg[2*idx+1]+seg[2*idx+2];

}*/
// lli dx[4] = {1, 0, 0, -1}, dy[4] = {0, -1, 1, 0}; //DLRU..lexographic
void precalc()
{
} 

void solve()
{
    lli n,l,s;
    cin>>n>>l>>s;
    lli z = s-l*(l+1)/2;
    if(z<0)
    {
        cout<<"NO"<<endl;
        return;
    }
    lli zz = z/l;
    zz = z*l;
    if(z-zz<=l)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}   
int main(){ 

    fio;

    // precalc();
    // cout << fixed << setprecision(1);

    lli t=1;
    cin>>t;

    int x = 1;

    while(t--)
    {
        // cout << "Case #"<<x<<": ";
        // x++;
        solve();

        //cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    }
    
}