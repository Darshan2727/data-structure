#include <stdio.h>
struct self
{
    int n;
    char c;
    struct self *ptr;
};
int main()
{
    struct self a, b, d, e;

    a.n = 70;
    a.c = 'J';
    a.ptr = NULL;

    b.n = 77;
    b.c = 'H';
    b.ptr = NULL;

    d.n = 99;
    d.c = 'A';
    d.ptr = NULL;

    e.n = 23;
    e.c = 'Z';
    e.ptr = NULL;

    // printf("Before Using pointer");
    // printf("\nA -> value of n:%d\tch:%c",a.n,a.c);
    // printf("\nB -> value of n:%d\tch:%c",b.n,b.c);

    b.ptr = &d;
    a.ptr = &e;
    e.ptr = &a;
    d.ptr = &b;

    printf("\n\nAfter Using pointer");
    printf("\nA -> value of n:%d\tch:%c", e.ptr->n, e.ptr->c);
    printf("\nB -> value of n:%d\tch:%c", d.ptr->n, d.ptr->c);
    printf("\nD -> value of n:%d\tch:%c", b.ptr->n, b.ptr->c);
    printf("\nE -> value of n:%d\tch:%c", a.ptr->n, a.ptr->c);
}