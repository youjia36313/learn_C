#include <stdio.h>

int main()
{
  short a = 10;
  int b = 100;
  long f = 12345678;
  char c = 'a';
  int short_length = sizeof a;
  int int_length = sizeof b;
  int char_length = sizeof c;
  int long_length = sizeof f;

  printf("short=%d, int=%d,long=%d,char=%d\n",short_length,int_length,long_length,char_length);
  return 0;
}
