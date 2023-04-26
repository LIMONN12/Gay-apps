#include<stdio.h>
#include<cs50.h>

int main(void)
{
    while (true)
    {
        int q = get_int("\nHow many times u want to repeat word gay? ");
        int count = 0;
        while (count < q)
        {
            printf("gay!\n");
            count++;
        }
        if (q <= 0)
        {
            printf("Please type a number above 0!");
        }
        if (q == 3)
        {
            break;
        }
    }
}