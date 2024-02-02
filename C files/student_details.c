#include<stdio.h>
int main()
{
    int stud_num,i;

    printf("Enter the number of students : ");
    scanf("%d", &stud_num);

    char names[stud_num][60], USN[stud_num][12];

    for(i=1;i<=stud_num;i++)
    {
        printf("Enter student name no. %d\t:",i);
        scanf("%s",names[i]);
        printf("Enter their respective USN \t:");
        scanf("%s",&USN[i]);
    }
    printf("Entered names and USNs are:\n");
    for(i=1;i<=stud_num;i++)
    {
        printf("%d. %s\t USN :%s\n",i,names[i],USN[i]);
    }
    return 0;
}