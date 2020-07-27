#include<bits/stdc++.h>
using namespace std;
/*
Problem check if a string can be a palindrom doing n permitations
complexity O(N)
*/
string x;
int bucket[256];
int tam;
bool maxoneodd(){
  int no=0;
  for(int i=0; i<256;i++){
      if(bucket[i]%2==1){
        no++;
      }
  }
  return !(no>1);
}
bool ispp(string s){
  for(int i=0; i<x.size();i++){
    bucket[int(x[i])]++;
  }
  return maxoneodd();
}
int main(){
cin>>x;
tam = x.size();
if(ispp(x)){
  cout<<"Is a Permutation of a palindrom";
}
else{
  cout<<"Is not";
}
return 0;
}
