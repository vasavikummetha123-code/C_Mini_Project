#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern int top;
extern char stack[100];
int priority(char ch);
void push(char ch);
char pop();
void postfix();
