#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter number of process");
    scanf("%d",size);
    ch arr[size];
    int arrival[size];
    int burst[size];
    int TAT[size];
    int wait[size];
    int completion[size];
    printf("enter arrival time and burst time of process");
    for(int i=0;i<size;i++)
    {
        scanf("%d%d",&arrival[i],burst[i]);
    }
    int sum=0;
    int sumburst=0;
    int sumcomp=0;
    for (int i=0; i<5; i++){
        sum=sum+burst[i];
        completion[i]=sum;
        sumburst=sumburst+burst[i];
        sumcomp=+completion[i];
    }
    int tatsum=0;
    for(int i=0;i<5;i++){
        TAT[i]=completion[i]-arrival[i];
        tatsum=tatsum+TAT[i];
    }
    int sumwait=0;
    for(int i=0;i<5;i++){
        wait[i]=completion[i]-burst[i];
        sumwait=sumwait+wait[i];
    }
    
        printf(" arrival time  burst time  completion time  turn around time  wait time  \n");
        for (int i=0;i<size;i++){
            printf("%d     %d     %d      %d       %d\n",arrival[i], burst[i],completion[i],TAT[i],wait[i]);
 }

 float avgtat=tatsum/(float)size;
 float avgcomp=sumcomp/(float)size;
 float avgwait=sumwait/(float)size;
 printf("avgtat=%f avgcomp=%f avgwait=%f",avgtat, avgwait,avgwait);
}