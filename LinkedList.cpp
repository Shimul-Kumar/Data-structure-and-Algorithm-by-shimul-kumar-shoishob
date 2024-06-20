#include <bits/stdc++.h>

struct NODE
{
    int data;
    struct NODE *nextInfo;
};

int main()
{

    struct NODE *a = NULL;
    struct NODE *b = NULL;
    struct NODE *c = NULL;
    struct NODE *d = NULL;

    a = (struct NODE *)malloc(sizeof(struct NODE));
    b = (struct NODE *)malloc(sizeof(struct NODE));
    c = (struct NODE *)malloc(sizeof(struct NODE));
    d = (struct NODE *)malloc(sizeof(struct NODE));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 40;

    a->nextInfo = b;
    b->nextInfo = c;
    c->nextInfo = d;
    d->nextInfo = NULL;

    while (a != NULL)
    {
        printf("%d -> ", a->data);
        a = a->nextInfo;
    }

    return 0;
}