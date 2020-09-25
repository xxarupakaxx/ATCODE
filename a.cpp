#include <bits/stdc++.h>
//#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
// using namespace atcoder;
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
//マクロ
// forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
// Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
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

    string s;
    set<char> t;

    cin >> s;
    rep(i, s.size()) { t.insert(s[i]); }
    char mi=*begin(t);
    rep(i, t.size()) {
        if (!t.count('a')) {
            cout << "a" << endl;
            break;
        }
        if (!t.count('b')) {
            cout << "b" << endl;
            break;
        }
        if (!t.count('c')) {
            cout << "c" << endl;
            break;
        }
        if (!t.count('d')) {
            cout << "d" << endl;
            break;
        }
        if (!t.count('e')) {
            cout << "e" << endl;
            break;
        }
        if (!t.count('f')) {
            cout << "f" << endl;
            break;
        }
        if (!t.count('g')) {
            cout << "g" << endl;
            break;
        }
        if (!t.count('h')) {
            cout << "h" << endl;
            break;
        }
        if (!t.count('i')) {
            cout << "i" << endl;
            break;
        }
        if (!t.count('j')) {
            cout << "j" << endl;
            break;
        }
        if (!t.count('k')) {
            cout << "k" << endl;
            break;
        }
        if (!t.count('l')) {
            cout << "l" << endl;
            break;
        }
        if (!t.count('m')) {
            cout << "m" << endl;
            break;
        }
        if (!t.count('n')) {
            cout << "n" << endl;
            break;
        }
        if (!t.count('o')) {
            cout << "o" << endl;
            break;
        }
        if (!t.count('p')) {
            cout << "p" << endl;
            break;
        }
          if (!t.count('q')) {
            cout << "q" << endl;
            break;
        }
        if (!t.count('r')) {
            cout << "r" << endl;
            break;
        }
          if (!t.count('s')) {
            cout << "s" << endl;
            break;
        }
        if (!t.count('t')) {
            cout << "t" << endl;
            break;
        }
        if (!t.count('u')) {
            cout << "u" << endl;
            break;
        }
        if (!t.count('v')) {
            cout << "v" << endl;
            break;
        }
        if (!t.count('w')) {
            cout << "w" << endl;
            break;
        }
        if (!t.count('x')) {
            cout << "x" << endl;
            break;
        }
        if (!t.count('y')) {
            cout << "y" << endl;
            break;
        }
        if (!t.count('z')) {
            cout << "z" << endl;
            break;
        }else{
            cout << "None" << endl;
            break;
        }
    }
}
