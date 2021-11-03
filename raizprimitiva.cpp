#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool Primo(ll n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int aum(ll x, unsigned int y, ll p) {
   int res = 1;
   x = x % p;
   while (y > 0){
      if (y & 1)
      res = (res*x) % p;
      y = y >> 1;
      x = (x*x) % p;
   }
   return res;
}
void GenerarPrimo(unordered_set<int> &s, int n) {
   while (n%2 == 0){
      s.insert(2);
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         s.insert(i);
         n = n/i;
      }
   }
   if (n > 2)
   s.insert(n);
}
int RaizPrimitiva(ll n) {
   unordered_set<int> s;
   if (Primo(n)==false)
   return -1;
   int ax = n-1;
   GenerarPrimo(s,ax);
   for (int r=2; r<=ax; r++){
      bool foco = false;
      for (auto q = s.begin(); q != s.end(); q++){
         if (aum(r, ax/(*q), n) == 1){
            foco = true;
            break;
         }
      }
      if (foco == false)
      return r;
   }
   return -1;
}
int main() {
   int numero= 100049;
   cout<<endl;
   cout<<RaizPrimitiva(numero);
   return 0;
}
