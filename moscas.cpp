#include<bits/stdc++.h>

using namespace std;
int arre[100002];
int n;
int ini, fin;
int maxini, maxfin;
int maxi= INT_MIN;
int mayor;
bool ban;
int vivas;
void buscar_maximo (){
  for(int i=0; i<mayor;i++)
    if(arre[i]>maxi) maxi = arre[i];
}
void moscas_vivas(){
  cout<<maxi<<'\n';
  for(int i=0; i<mayor;){
    if(arre[i]==maxi){
      cout<< i << " ";
      while(arre[i]==maxi) i++;
      cout<< i<< '\n';
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>ini>>fin;
    arre[ini]++;
    arre[fin]--;
    if(mayor < fin){
      mayor = fin;
    }
  }
  for(int i=0; i< mayor; i++){
    vivas+=arre[i];
    arre[i]= vivas;
  }
  buscar_maximo();
  moscas_vivas();


return 0;
}
