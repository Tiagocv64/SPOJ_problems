#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define loop(iii,l,r) for (int iii = l; iii < r; iii++)
#define tests int T; cin >> T; while(T--)
#define TESTS int t, T = 0; cin >> t; while (t-- && ++T)
#define all(c) (c).begin(),(c).end() //handy for function like "sort()"
#define ll long long //data types used often, but you don't want to type them time by time
#define ull unsigned long long
#define ui unsigned int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); //to desynchronize the input of cin and scanf
#define PI 3.1415926535897932384626
//for map, pair
#define mp make_pair
#define fi first
#define se second
//for vectors
#define pb push_back
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

// *****************************



int main(){
    IOS

    int n, m, T = 1;
    while (cin >> n >> m && (n != 0 || m != 0)){
        int b = 1e9, cur;
        loop(i,0,n){
            cin >> cur;
            b = min(cur, b);
        }
        loop(i,0,m)
            cin >> cur;
        if (n > m){
            cout << "Case " << T++ << ": " << n-m << " " << b << "\n";
        } else {
            cout << "Case " << T++ << ": 0\n";
        }

    }
    
}