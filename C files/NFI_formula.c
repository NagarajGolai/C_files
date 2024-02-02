#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float res,x,r,x_arr[10],y[10],y1[10],y2[10],y3[10],y4[10];

    printf("Enter the number of elements(n) :\t");
    scanf("%d",&n);
    printf("Enter the elements(x) :\t");
    for(i=0;i<n;i++)
    {   
        scanf("%f",&x_arr[i]);
    }
    printf("Enter the elements(y) :\t");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter the value of x:\t");
    scanf("%f",&x);
    r = (x-x_arr[0])/(x_arr[1]-x_arr[0]);

    for(i=0;i<n-1;i++)
    {    
        y1[i] = y[i+1] - y[i];
    }
    for(i=0;i<n-2;i++)
    {    
        y2[i] = y1[i+1] - y1[i];
    }
    for(i=0;i<n-3;i++)
    {    
        y3[i] = y2[i+1] - y2[i];
    }
    for(i=0;i<n-4;i++)
    {    
        y4[i] = y3[i+1] - y3[i];
    }

    printf("X\tY\tY1\tY2\tY3\tY4\n");
    for(i=0;i<n;i++)
    {
        printf("%0.2f\t%0.3f\t%0.3f\t%0.3f\t%0.3f\t%0.3f\n",x_arr[i],y[i],y1[i],y2[i],y3[i],y4[i]);
    }

    res = y[0] + (r*(y1[0])) + ((r*(r-1)*y2[0])/4) + ((r*(r-1)*(r-2)*y3[0])/6) + ((r*(r-1)*(r-2)*(r-3)*y4[0])/24);
    printf("------------------------------------\n");
    printf("The value of r is %0.2f\n",r);
    printf("The result is %0.3f\n",res);

}