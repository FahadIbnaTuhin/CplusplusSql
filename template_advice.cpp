//In the name of ALLAH 

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 
typedef vector<int> vi; 
typedef vector<ll> vl; 
typedef vector<vi> vvi; 
typedef vector<vl> vvl; 
typedef pair<int, int> pii; 
typedef pair<double, double> pdd; 
typedef pair<ll, ll> pll; 
typedef vector<pii> vii; 
typedef vector<pll> vll; 
typedef double dl; 

#define PB push_back 
#define F first 
#define S second 
#define MP make_pair 
#define endl '\n' 
#define all(a) (a).begin(),(a).end() 
#define sz(x) (int)x.size() 
#define mid(l, r) ((r+l)/2) 
#define left (node) (node*2)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed, ios:: floatfield); 
#define file() freopen("input.txt","r", stdin); freopen("output.txt", "w", stdout);

typedef vector<int>::iterator vit; 
typedef set<int>::iterator sit; 

int dx[] = {0, 0, +1, -1}; 
int dy[] = {+1, -1, 0, 0}; 

//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1}; 
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1}; 


// Debugger
template < typename F, typename S > 
ostream& operator << ( ostream& os, const pair< F, S >&p) { 
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << (ostream & os, const vector< T > &v) {
    os << "{";
        for (auto it = v.begin(); it != v.end(); ++it) { 
            if( it != v.begin()) os << ", ";
                os << *it; 
            }
            return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set<T> &v) { 
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) { 
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset<T> &v) {
    os << "[";
        for (auto it = v.begin(); it != v.end(); ++it) { 
            if( it != v.begin()) os << ", ";
            os << *it;
        }
        return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v) { 
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin()) os << ", ";
        os << it -> first << " - " << it -> second;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n) {
    for (int i = 0; i < n; ++i) cerr << a[i] << ' '; 
        cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) { 
    cerr << arg << ' ';
        faltu(rest...);
}

int main()
{
    optimize();
    
    // int a[10];
    // memset(a, 2, sizeof(a)); // 0 & -1 works only
    // for(auto u : a) cout << u << ' ';
    // cout << '\n';

    // double a, b;
    // a = 1.2333331231231231231, b = 1.2333331231231231231;

    // if (a == b) // if you use this for comparing two double, then there is a huge chance to get wrong decision 
    // if you need to compare two double, then try to compare them to integer compare. IF you can't do, then
    // const double eps = 1e-9; use this as a template
    // if (abs(a - b) < 1e-9) // eps = 1e-9
    // suppose if abs value is 1e-10, 1e-20 then it is true means same 

    // if (abs(a - b) < 1e-9) cout << "YES\n";
    // else cout << "NO\n";


    // vii v;
    // v.PB ({1, 2});
    // v.PB ({2, 3});

    // sort(all(v));

    // for(auto u : v) cout << u.F << " " << u.S << '\n';
    // for(int i = 0; i < sz(v); i++) {
    //     cout << v[i].F << " " << v[i].S << '\n';
    // }
    

    // dl a = 1.23423;
    // fraction(4); // this will affect only those elemenets which will be print or use under this line
    // cout << a << '\n';

    // DEBUGGER: It uses cerr to give you data. You can see this when using console but it doesn't print remember
    // if you submit you code without uncommenting this, codeforces or any judge will accept but it will continuously
    // give the judge the cerr message all through it won't affect. But for bigger problem, you can get TLE. So uncomment
    // before submitting your code
    // int a = 1;
    // dbg(a);

    // int a = 1, b = 5, c = 2;
    // dbg(a, b, c);

    // vi v = {1, 2, 3};
    // dbg(v);
    // dbg(a, b, c, v); // works but hards to understand. So, using only same kinds of thing is recommanded. AVOID MIXING

    // set<int> s = {1, 2, 3, 4};
    // dbg(s);
    
    // pii p = {1, 2};
    // dbg(p);

    // vii vo = {{1, 2}, {2, 3}};
    // dbg(vo);

    // For array, it won't work like this way
    // int a[] = {1, 2, 3};
    // dbg(a); 
    // dbg(a, 3); // have to tell how much you want to see from the beginning

    // int a[10] = {1, 2, 3};
    // dbg(a, 7); // want to see only the first 7 element of a array

    int a[123];
    mem(a, -1);
    dbg(a, 10);

    return 0;
}