#include <stdio.h>

int main()
{
    int t;
    const double pi= 3.1415926535;
    double area,R;
    scanf("%d",&t);
    for(int i=0; i<t ; i++)
    {
        scanf("%lf",&R);
        area = pi*(R*R);
        printf("%.7lf\n",area);

    }
    return 0; 
        

}