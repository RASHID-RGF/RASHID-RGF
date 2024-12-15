#include<stdio.h>
int main{

int Ages[9],K,High,Low,Children=0;
float sum=0,Average;
for(K=0,K<9,K++)
{
printf("Enter age for students %d:",K+1);
scanf("%d,"&Ages[K]);

}
printf("\n student Ages\n");

for=(k=0;k<9;k++)

printf("%d\n",Ages[K]);
sum+=Ages[K];
if(High<Ages[K])
{
High=Ages[K];

}
if (Ages[K]<18)
{
    Childeren++ ;
}
Average=sum/9;
printf("\n sum=%.2f\n",Sum);
printf("Average=%.2f\n",Average);
printf("Hieghest=%d\n",High);
printf("No of children=%d\n",children);
printf("\n Children Ages \n");

for ("K=0;K<9;K++")
if (Ages[K]<18)
{
printf("%d\n",Ages[K]);
}

return 0;



}