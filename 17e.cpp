#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
const ll M1 = 1000000007LL;
const ll B1 = 131LL;
const ll M2 = 1000000009LL;
const ll B2 = 137LL;
const int MAXN = 200010;
ll pow1[MAXN], pow2[MAXN];
void pre_pow() {
  pow1[0] = 1;
  for(int i=1; i<MAXN; i++) {
    pow1[i] = pow1[i-1] * B1 % M1;
  }
  pow2[0] = 1;
  for(int i=1; i<MAXN; i++) {
    pow2[i] = pow2[i-1] * B2 % M2;
  }
}
void solve(){
  int n, sharas;
  cin >> n >> sharas;
  vector<int> aa(n+1);
  for(int i=1; i<=n; i++) {
    cin >> aa[i];
  }
  int raunak = n;
  vector<ll> pref1(n+1, 0), pref2(n+1, 0);
  for(int i=1; i<=n; i++) {
    pref1[i] = (pref1[i-1] * B1 + aa[i]) % M1;
    pref2[i] = (pref2[i-1] * B2 + aa[i]) % M2;
  }
  auto geth = [&](int l, int r) -> pll {
    ll h1 = (pref1[r] + M1 - (pref1[l-1] * pow1[r-l+1] % M1)) % M1;
    ll h2 = (pref2[r] + M2 - (pref2[l-1] * pow2[r-l+1] % M2)) % M2;
    return {h1, h2};
  };
  vector<int> rrev(n+1);
  for(int i=1; i<=n; i++) {
    rrev[i] = aa[n - i +1];
  }
  vector<ll> rpref1(n+1, 0), rpref2(n+1, 0);
  for(int i=1; i<=n; i++) {
    rpref1[i] = (rpref1[i-1] * B1 + rrev[i]) % M1;
    rpref2[i] = (rpref2[i-1] * B2 + rrev[i]) % M2;
  }
  vector<int> pal_s;
  for(int L=1; L<=n; L++) {
    int s = n - L +1;
    pll fh = geth(s, n);
    pll rh = {rpref1[L], rpref2[L]};
    if(fh == rh) {
      pal_s.push_back(s);
    }
  }
  vector<int> app;
  for(int qi=0; qi<sharas; qi++) {
    map<int, int> freqm;
    int lastv = aa[raunak];
    freqm[lastv]++;
    for(int s: pal_s) {
      if(s > 1) {
        int pv = aa[s-1];
        freqm[pv]++;
      }
    }
    int bx;
    if(freqm.size() < (size_t)n ) {
      int cand =1;
      while(cand <=n && freqm.count(cand)) cand++;
      bx = cand;
    } else {
      int mf = INT_MAX;
      int bxx = n+1;
      for(auto& pr : freqm) {
        if(pr.second < mf || (pr.second == mf && pr.first < bxx)) {
          mf = pr.second;
          bxx = pr.first;
        }
      }
      bx = bxx;
    }
    app.push_back(bx);
    int oldm = raunak;
    vector<int> newps;
    newps.push_back(oldm + 1);
    if(aa[oldm] == bx) {
      newps.push_back(oldm);
    }
    for(int os : pal_s) {
      if(os > 1 && aa[os-1] == bx) {
        newps.push_back(os - 1);
      }
    }
    sort(newps.begin(), newps.end());
    auto ite = unique(newps.begin(), newps.end());
    newps.resize(ite - newps.begin());
    raunak ++;
    aa[raunak] = bx;
    pal_s = std::move(newps);
  }
  for(int i=0; i<sharas; i++) {
    if(i>0) cout << " ";
    cout << app[i];
  }
  cout << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  pre_pow();
  int seenu;
  if(!(cin >> seenu)) return 0;
  for(int tt=0; tt<seenu; tt++){
    solve();
  }
  return 0;
}
