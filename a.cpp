#include <bits/stdc++.h>
//#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
 //using namespace atcoder;
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
//マクロ
// forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
// Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
#define _GLIBCXX_DEBUG
// xにはvectorなどのコンテナ
#define ALL(x) (x).begin(), (x).end()  // sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size())       // sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x))    //最大値を求める
#define MIN(x) *min_element(ALL(x))    //最小値を求める
//定数
#define INF 1000000000000  // 10^12:極めて大きい値,∞
#define inf 2147483647     // int値の最大値
#define MOD 1000000007     // 10^9+7:合同式の法
#define MAXR 100000        // 10^5:配列の最大のrange(素数列挙などで使用)
//略記
#define PB push_back                             // vectorヘの挿入
#define MP make_pair                             // pairのコンストラクタ
#define F first                                  // pairの一つ目の要素
#define S second                                 // pairの二つ目の要素
#define CST(x) cout << fixed << setprecision(x)  //小数点以下の桁数指定
template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
//各桁の和
int sumDight(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}
//回文数
int divideReverse(int x) {
    int reverse = 0;
    int r;
    while (x > 0) {
        r = x % 10;
        reverse = reverse * 10 + r;
        x /= 10;
    }
    return reverse;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> G(n);
    rep(i, m) { 
        ll a,b;
        cin >> a >> b;
        G[a].push_back({b});

    }
    vector<bool> seen(n, false);
    stack<ll> st;
    st.emplace(1);
    seen[1] = true;
    while (st.size() != 0) {   // 深さ優先探索
        int state = st.top();  // 現在の状態
        st.pop();
        for (auto next : G[state]) {
            if (!seen[next]) {  // 未探索の時のみ行う
                seen[next] = true;
                st.emplace(next);  //次の状態をqueueへ格納
            }
        }
    }
    int sum = 0;

    rep(i, n){
        if (seen[i] == false) sum++;
    }
    cout << sum << endl;
}
