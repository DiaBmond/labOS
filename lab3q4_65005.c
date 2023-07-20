#include <stdio.h>
int main(){
    int sum=0,a;
    float avg,n=0;
    do{
      printf("enter a number : ");
      scanf("%d",&a);
      if(a<0)break;
      n++;
      sum+=a;
    }while(a>0);
    if(a==0)n--;

    //int a,b,c;
    //printf("enter a number : ");
    //scanf("%d",&a);
    //printf("enter two number : ");
    //scanf("%d %d",&b,&c);

    avg = sum / n;
    printf("summation = %d\n",sum);
    printf("average = %f\n",avg);
    return 0;
}
