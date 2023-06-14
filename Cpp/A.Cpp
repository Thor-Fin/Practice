#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define PB push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define f first
#define s second
#define read(x) int x;cin>>x
#define show(x) cout<<x<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve() {
   read(n); string s; cin >> s;
   string temp;

   int low = 0;
   for (int i = 0; i < n;) {

      while (i + 1 < n && s[low] != s[i + 1]) i++;
      temp += s[low];
      low = i + 1;
      i++;
   }
   show(temp);
   return;
}

int main() {
   fast_io;
   int t; cin >> t;
   //t = 1;
   while (t--) {
      solve();
   }
   return 0;
}
