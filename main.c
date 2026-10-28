#include "header.h"
int main()
{
  char str[50],postfix[50];
  int i=0,j=0;
  char ch;
  printf("Enter infix expression: ");
  scanf("%s",str);
  while(str[i]!='\0')
    {
      ch=str[i];
      if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
      {
        postfix[j++]=ch;
      }
      else if(ch=='(' || ch=='[' || ch=='{')
      {
        push(ch);
      }
      else if(ch==')' || ch==']' || ch=='}')
      {
        while(top!=-1 && stack[top]!='(' && stack[top]!='[' && stack[top]!='{')
        {
          postfix[j++]=pop();
        }
        if(top!=-1)
          pop();
      }
      else
      {
        while(top!=-1 && stack[top]!='(' && stack[top]!='[' && stack[top]!='{' && priority(stack[top])>=priority(ch) && ch!='^') 
          {
                postfix[j++]=pop();
          }
          if(ch=='^')
          {
            while(top!=-1 && stack[top]!='(' && stack[top]!='[' && stack[top]!='{' && priority(stack[top])>priority(ch))
            {
              postfix[j++]=pop();
            }
          }
          push(ch);
        }
        i++;
      }
  while(top!=-1)
  {
    postfix[j++]=pop();
  }
  postfix[j]='\0';
  printf("Postfix expression: %s\n", postfix);
  return 0;
}
