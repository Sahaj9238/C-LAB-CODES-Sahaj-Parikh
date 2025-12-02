#include <stdio.h>

typedef struct abc
{
  int a;
  struct abc *b;
} abc;
int main()
{
  abc *c = (abc *)malloc(sizeof(abc));
  c->a = 10;
  abc *d = (abc *)malloc(sizeof(abc));
  d->a = 20;
  abc *e = (abc *)malloc(sizeof(abc));
  e->a = 30;
  c->b = d;
  d->b = e;
  e->b = NULL;
  printf("Linked List=");
  abc *temp = c;
  while (temp)
  {
    printf("%d", temp->a);
    temp = temp->b;
  }
  return 0;
}
