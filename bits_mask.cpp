#include<bits/stdc++.h>
/*
The first position of an integer is the sign, then the 2^31 are the number
Int= [1,1,1,1,1,....,1,1] -> -1
      Negative
    We start with -1
    To write in negative we add a 0 instead of 1 but do one befor the number, because the
    full array with 1 is -1
    For example to write -8
            2^2 2^1 2^0
111,...,    0    0   0
            -4   -2 -1 = -7 -1 = -8
int a=7
a*=-1 == a-=2*a == a=~a+1

"Demostration"
a = ~a+1
111111000 -> ~7 = -8
111111001 ->-7+1= -7
a-=2*a
a = a - a *-a
a = -a
a*=-1
a = a *-1
a = -a

if we have only one of these operation is a binary operation (&,|,)
and-> 1001 & 1110 = 1000 example:
int b=7, c=5;
cout<<(b&c)<<endl
The cout  5
1 1 1 -> 7
1 0 1 -> 5
______
1 0 1 -> 5

or-> 101 | 100 = 111 example:
int c = 5 , d= 2;
cout<<(c|d)<< endl;
The cout  7
101 ->5
010 ->2
----
111 ->7

xor-> 101 ^ 100 = 001 example:
cout<< (c^1)<<endl;
The cout 4
1 0 1 -> 5
0 0 1 -> 1
-----
1 0 0 -> 4

Right shift and  Left shift don't move th sign of the number and only use positive numbers
right shift -> 1011 >> 0101 Go to the right the numbers
Number>> times to do the right shift
cout<< (11 >> 1) Cout 5
cout<< (11>> 4) cout 0

left shift -> 1001 << 1 Go to the left the numbers
Number<< times to do the left shift
cout<< (11<<1) cout 22

Negation of last position
101 -> 5
010 -> 4
001 ^
5^1 = 4
4^1 = 5


*/
using namespace std;

int main(){
int b= 7 , c=5, d=2;
cout<<"7 & 5:"<<(b&c)<<endl;
cout<<"5 | 2: "<<(c|d)<<endl;
cout<<"5 ^ 2: "<<(c^1)<<endl;
cout<<"11 >> 1: "<<(11>>1)<<" 11 >> 4:"<< (11>>4)<<endl;
cout<<"11 << 1: "<< (11<<1)<<endl;
cout<<"Negation of last position of 5 and 4: "(5^1)<<" And for four"<<(4^1)<<endl;
return 0;

}
