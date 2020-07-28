#include<bits/stdc++.h>
/*
  N number of bacteries to give the goverment
  Each day the bacteri duplicate
  Minmun number of bacteries to get the number and in what day I have
  Solution:
  We need to check out the most important bit (days) and with "And" and right shift to use the bits (nb)
  O(C)
*/
using namespace std;
int days;
int nb;
void solve(int n){
  while(n){
    days++;
    if(n&1){
      nb++;
    }
    n>>=1;
  }
  cout<<nb;
}
int main(){
  int n;
  cin>>n;
  solve(n);

return 0;
}
