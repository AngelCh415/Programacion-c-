#include<bits/stdc++.h>
using namespace std;
//Problem 2 vectors in order and find the intersection of both
/*
  complexity O(N)
  If is sort this is the best option, in other case a Hash table
*/
vector<int> a= {1,2,5,7,100};
vector<int> b= {0,2,100};
vector<int> intersecion (vector<int> a, vector<int>b){
  vector<int>ans;
  int j=0, i=0;
  while(1){
    if(a[i]== b[j]){
      ans.push_back(a[i]);
      i++;
      j++;
    }
    if(a[i]>b[j]){
      while(a[i]>b[j])j++;
        if(j>=b.size())break;
    }
    else{
      while(a[i]<b[j])i++;
        if(i>=a.size())break;
    }
  }
  return ans;
}
int main(){
  vector<int> ans = intersecion(a,b);
  for(int i=0; i<ans.size();i++) cout<<ans[i]<<" ";
return 0;
}
