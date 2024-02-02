#include <stdio.h>
int main()
{
    int i, n, bt[10], wt[10], tat[10];
    float wt_avg, tat_avg;

    printf("Enter the number of processes:\t");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the burst time of P%d:\t", i);
        scanf("%d", &bt[i]);
    }
    
    wt[0] = wt_avg = 0;
    tat[0] = tat_avg = bt[0];

    for(i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];
        wt_avg += wt[i];
        tat_avg += tat[i];
    }
    
    wt_avg = wt_avg/n;
    tat_avg = tat_avg/n;

    printf("\tProcess\t\tBurst time\tWaiting time\tTurnaround time\n");
    for (i = 0; i < n; i++)
    {
        printf("\t  P%d\t\t  %d\t\t  %d\t\t  %d\n", i, bt[i], wt[i], tat[i]);
    }
    printf("The average waiting time is %d:\t\n",wt_avg);
    printf("The average turnaround time is %d:\t\n\n",tat_avg);

    return 0;
}