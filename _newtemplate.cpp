//
// Author: Harsh_Vasoya, DA-IICT
//

#include <bits/stdc++.h>

#define sync_off std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define hashmap unordered_map
#define hashset unordered_set

#define all(v) v.begin(),v.end()
#define contains(x,a) (x).find(a)!=(x).end()
#define pb push_back

#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second

#define si(n)	 scanf("%d",&n)
#define sii(n,m) scanf("%d%d",&n,&m)
#define slli(n)  scanf("%lld",&n)
#define forn(i,a,b) for(int i=a;i<b;i++)

const int mod = 10000009;
const lli MOD = 1000000007;
const int INF = INT_MAX;
int DEBUG = 0;

using namespace std;

/*p */ template<class T1,class T2>ostream&operator<<(ostream& os,const pair<T1,T2>&p){os<<"["<<p.first<<","<<p.second<<"]";return os;}
/*v */ template<class T>ostream&operator<<(ostream& os,const vector<T>&v){os << "[";bool first=true;for (T it:v){if (!first)os<<", ";first = false;os<<it;}os<<"]";return os;}
/*s */ template<class T>ostream&operator<<(ostream& os,set<T>&v){os<<"[";bool first=true;for (T it:v){if(!first)os<<", ";first=false;os<<it;}os<<"]";return os;}
/*hs*/ template<class T>ostream&operator<<(ostream& os,unordered_set<T>&v){os<<"[";bool first=true;for (T it:v){if(!first)os<<", ";first=false;os<<it;}os<<"]";return os;}
/*m */ template<class T1,class T2>ostream&operator<<(ostream& os,map<T1,T2>&v){os<<"[";bool first=true;for(pair<T1,T2> it:v){if(!first)os<<", ";first=false;os<<"("<<it.F<<","<<it.S<<")";}os<<"]"<<endl;return os;}
/*hm*/ template<class T1,class T2>ostream&operator<<(ostream& os,unordered_map<T1,T2>&v){os<<"[";bool first=true;for(pair<T1,T2> it:v){if(!first)os<<", ";first=false;os<<"("<<it.F<<","<<it.S<<")";}os<<"]"<<endl;return os;}
/*q */ template<class T>ostream&operator<<(ostream& os,queue<T>&q){os<<"[";bool first=true; int sz=q.size(); for(int i=0;i<sz;i++){if(!first) os<<", "; first=false; os<<q.front(); q.push(q.front()); q.pop(); }os<<"]"<<endl;}
/*pq*/ template<class T>ostream&operator<<(ostream& os,priority_queue<T>&pq){vector<T> temp;os<<"[";while(!pq.empty()){os<<pq.top();temp.pb(pq.top());pq.pop();if(!pq.empty())os<<", ";}os<<"]"<<endl;for(int i=0;i<temp.size();i++)pq.push(temp[i]);return os;}
void print_arr(int arr[],int n){cout<<("[");forn(i,0,n){cout<<(arr[i]);if(i!=n-1) cout<<(", ");}cout<<("]\n");}
void cut(){if(DEBUG) cout<<"----------------------------\n"<<endl; }

int bit_cnt(lli n){int c=0;while(n){if(n&1) c++;n>>=1;}return c;}
lli gcd(lli a,lli b){while(b){lli r=a%b;a=b;b=r;}return a;}
lli power(lli a,lli b,lli m=MOD){a%=m; b%=m; lli r=1;while(b){if(b%2==1)r=(r*a)%m;b/=2;a=(a*a)%m;}return r;}
lli add(lli a,lli b,lli m=MOD){a%=m; b%=m; lli x=a+b;while(x>=m)x-=m;return x;}
lli sub(lli a,lli b,lli m=MOD){a%=m; b%=m; lli x=a-b;while(x<0)x+=m;return x;}
lli mul(lli a,lli b,lli m=MOD){a%=m; b%=m; lli x=a*1ll*b;x%=m;if(x<0)x+=m;return x;}
lli divide(lli a,lli b,lli m=MOD){a%=m; b%=m; return (a*power(b,m-2,m))%m;}

int main()
{


    return 0;
}
