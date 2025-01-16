#include <stdio.h>
int main()
{
    int m, p, c, e, h, per;
    printf("enter the marks of mathematics =");
    scanf("%d", &m);
    printf("enter the marks of english =");
    scanf("%d", &e);
    printf("enter the marks of hindi =");
    scanf("%d", &h);
    printf("enter the marks of physics =");
    scanf("%d", &p);
    printf("enter the marks of chemistry =");
    scanf("%d", &c);
    per = (m + e + p + c + h) / 5;
    printf("percentage=%d\n", per);
    if (per >= 40)
    {
        if (per <= 100 && per >= 90)
        {
            printf("excellent");
        }
        else
        {
            if (per < 90 && per >= 80)
            {
                printf("very good");
            }
            else
            {
                if (per < 80 && per >= 70)
                {
                    printf("good");
                }
                else
                {
                    if (per < 70 && per >= 60)
                    {
                        printf("u can do better");
                    }
                    else
                    {
                        if(per<60 && per>=50){
                            printf("average");
                        }
                        else
                        {
                            printf("below average");
                        }
                    }
                }
            }
        }
    }
    else 
    {
        printf("fail");
    }
    
    return 0;
}
