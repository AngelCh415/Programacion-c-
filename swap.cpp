#include<bits/stdc++.h>
using namespace std;
/*
  Swap two numbers with out using  swap and aux
*/
int main(){
int a = 5;
int b= 10;
a = a+b;
 b = a-b;
 a = a-b;
 cout<<a<<" "<<b;


return 0;
}
