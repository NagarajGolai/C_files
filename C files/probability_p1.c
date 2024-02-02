#include <stdio.h>
#include<math.h>

int main()
{
    int i, n, x[10];
    float mean, var, p, q, P[10];

    printf("Enter the number of elements in the table:\t");     //read
    scanf("%d", &n);

    printf("Enter the P elements:\t\n");      //read
    for (i = 0; i < n; i++)
    {
        printf("%d. ",i+1);
        scanf("%f", &P[i]);
    }
    //printf("Enter the value of p and q:\t");
    // scanf("%f%f", &p, &q);

    printf("X\tP(Xi)\n");              //print
    for (i = 0; i < n; i++)    
    {
        printf("%d\t%f\n",i+1,P[i]);
    }

    mean = 0;
    var = 0;

    for(i=0;i<n;i++)
    {
        mean += (float)x[i] + P[i];
    }
    for(i=0;i<n;i++)
    {
        var += pow((float)x[i] - mean,2) * P[i];
    }
    printf("Mean is %0.3f\nVariance is %0.3f\n",mean/n,var/n);
}