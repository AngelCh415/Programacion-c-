#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> L;
vector<int> D;
void mix(int ini, int mid, int fin){
  int szi = mid - ini + 1;
  int szd = fin- mid;
  int j=0, k=0;
  L.resize(szi);
  D.resize(szd);
  for(int i=0; i<szi;i++){
    L[i]=a[i+ini];
  }
  for(int i=0; i<szd;i++){
    D[i]=a[i+mid+1];
  }
  int i;
  for(i=ini; i<=fin;i++){
    if(L[j]<D[k] and j<szi){
      a[i]= L[j];
      j++;
    }else if(D[k]<=L[j] and k<szd){
      a[i]= D[k];
      k++;
    }
    if(j==szi or k==szd) break;
  }
i++;
while(j<szi){
  a[i]= L[j];
  j++;i++;
}
while(k<szd){
  a[i]=D[k];
  k++;i++;
 }
}

void merge_sort(int ini, int fin){
  if(ini>=fin) return;
  merge_sort(ini, (ini+fin)/2);
  merge_sort((ini + fin)/2+1, fin);
  mix(ini, (ini+fin)/2, fin);
}
/*bool order(){
  for(int i=1; i<10; i++){
    if(a[i]-a[i-1]<0){
      return 0;
    }
  }
  return 1;
}*/
int main(){
 /*a.resize(10);
  for(int i=0; i<10; i++){
    cin>>a[i];
  }
  if(order()){
    cout<<"Is in order";
  }
  else{
    cout<<"Is not in order";
  }*/
  cin>>n;
  a.resize(n);
  for(int i=0; i<a.size();i++){
    cin>>a[i];
  }
  /* es igual
for (int i=0; i<a.size(); i++)
  cin>>a[i];

*/
  merge_sort(0,a.size()-1);
  for(int i=0; i<a.size();i++){
    cout<<a[i]<<endl;
  }
return 0;
}
