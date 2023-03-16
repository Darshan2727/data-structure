#include<stdio.h>
int fun(int i)
{
    printf("\nBefore Inside function %d ",i);
    if(i<3)
        fun(++i);
    else
        return 0;
    printf("\nAfter Inside Function %d ",i);        
}
int main()
{
    fun(1);
}