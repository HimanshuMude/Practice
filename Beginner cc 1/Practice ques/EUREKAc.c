#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        // Approach for Question 5
        float n;
        scanf("%f",&n);
        float ans=pow(n*0.143,n);
        printf("%d\n",lround(ans));

        //Approach for Approx Decimal value upto 1 digit after Decimal 
        int m;
        scanf("%d",&m);
        float ans=m*10;//3.48---34.8
        int x=lround(ans);//35
        printf("%0.1f\n",x/10.0);
        

    }
    return 0;
}