#include <bits/stdc++.h>
#define DEBUG true
#define ENDL '\n'
#define deb(u) \
  if (DEBUG)   \
    cout << #u " : " << (u) << ENDL;
#define deba(alias, u) \
  if (DEBUG)           \
    cout << alias << ": " << (u) << ENDL;
#define debp(u, v) \
  if (DEBUG)       \
    cout << u << " : " << v << ENDL;
#define pb push_back
#define F first
#define S second
#define lli long long
#define ld long double
#define pii pair<int, int>
#define pll pair<lli, lli>
#define ALL(a) (a).begin(), (a).end()
#define ALLR(a) (a).rbegin(), (a).rend()
#define FOR(i, a, n) for (int i = (a); i < (n); ++i)
#define FORN(i, a, n) for (int i = (a - 1); i >= n; --i)
#define IO                          \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
using namespace std;

int main()
{
  IO;
  int n;
  cin >> n;
  vector<int> v(n, 0);
  int total = 0;
  FOR(i, 0, n)
  {
    int curr;
    cin >> curr;
    v[i] = total;
    total += curr;
  }
  int found = false;
  if (total % 2)
  {
    cout << "N" << ENDL;
    return 0;
  }
  FOR(i, 0, n)
  {
    if (v[i] > total / 2)
      break;
    int pair = v[i] + total / 2;
    if (binary_search(ALL(v), pair))
    {
      found++;
    }
  }
  if (found >= 2)
  {
    cout << "Y" << ENDL;
  }
  else
    cout << "N" << ENDL;

  return 0;
}