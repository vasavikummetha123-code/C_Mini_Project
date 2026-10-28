#include"header.h"
int priority(char ch)
{
  if(ch=='^')
  {
     return 3;
  }
  else if(ch=='*' || ch=='/')
  {
     return 2;
  }
  else if(ch=='+' || ch=='-')
  {
     return 1;
  }
   return 0;
}
