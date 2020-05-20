#include <stdio.h>
#include <math.h>


int dec_to_bin(int num)
{
    int res=0;
    int x;
    while((num/2) != 0)
    {
        for(int i=1; i>0; i++)
        {
         x=num%2;
         res+=x;
         num=num/pow(2, i);
        }
    }
    return res;
}

int bin_to_dec(int num)
{

}

int main()
{
    int num=39;
    scanf("%d", &num);
    int a=dec_to_bin(num);
    printf("\n%d",a);
    return 0;
}
