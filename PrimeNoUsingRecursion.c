#include<stdio.h>

int prime(int n,int i)
{
    if(i==n)
        return 0;
    else if(n%i==0)
        return 1;
    else
        return prime(n,i+1);
}
int main()
{
    int num=29;

    if(prime(num,2)==0)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);

}
