#include<bits/stdc++.h>
using namespace std;

int heap[1000000], tam;
int
left (int cur)
{
  return cur * 2 + 1;
}

int
right (int cur)
{
  return cur * 2;
}

int
father (int cur)
{
  return cur / 2;
}

void
push (int elem)
{
  tam++;
  heap[tam] = elem;
  int cur = tam;
  while (cur > 1 and heap[cur] > heap[father (cur)])
    {
      swap (heap[cur], heap[father (cur)]);
      cur = father (cur);
    }
}

int
Maximum ()
{
  return heap[1];
}

void
pop ()
{
  heap[1] = heap[tam];
  tam--;
  //swapping to find big son
  int cur = 1;
  while (1)
    {
      int r = INT_MIN, l = INT_MIN;	//INT_MIN -> -infinite
      //r = right, l = left
      if (right (cur) <= tam)
	r = heap[right (cur)];
      if (left (cur) <= tam)
	l = heap[left (cur)];

      if (right (cur) > tam and left (cur) > tam)
	break;
      if (r < heap[cur] and l < heap[cur])
	break;

      if (r > l)
	{
	  swap (heap[cur], heap[right (cur)]);
	  cur = right (cur);
	}
      else
	{
	  swap (heap[cur], heap[left (cur)]);
	  cur = left (cur);
	}
    }
}

bool
empty ()
{
  return !tam;
}

int
main ()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      push (x);
    }
  while (!empty ())
    {
      cout << Maximum () << endl;
      pop ();
    }
  return 0;
}
