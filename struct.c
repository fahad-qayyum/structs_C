
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
int id;
char name[30];
int quiz_mark;
int final_mark;
}student;
int main()
{
student std[2];
int i=0;
for(i=0;i<2;i++)
{
printf("Enter the id: ");
scanf("%d",&std[i].id);
fflush(stdin);
printf("\nEnter the name: ");
fgets(std[i].name,30,stdin);
printf("\nEnter the quiz marks: ");
scanf("%d",&std[i].quiz_mark);
printf("\nEnter the final marks: ");
scanf("%d",&std[i].final_mark);
}
for(i=0;i<2;i++)
{
printf("\nThe %d id is: %d",i+1,std[i].id );
printf("\nThe %d name is: %s",i+1,std[i].name );
printf("\nThe %d quiz marks is: %d",i+1,std[i].quiz_mark );
printf("\nThe %d final marks is: %d",i+1,std[i].final_mark );

}

return 0;
}
