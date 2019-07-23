#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *f;
char fname[20],lname[20];
int age,month,year,mob,term,sum,prem,pol,a,i,b;

one:
f=fopen("sau.txt","a");
printf("Enter the number of clients:");
scanf("%d",&a);
if(f==NULL)
{
printf("ERROR!");
exit(1);
}
for(i=0;i<a;i++)
{
printf("\nClient Number %d\n",i+1);
printf("Enter First Name:\n");
scanf("%s",&fname);
printf("Enter Last Name:\n");
scanf("%s",&lname);
printf("Enter Date of birth:\n");
printf("day:");
scanf("%d",&age);
printf("\nmonth number:");
scanf("%d",&month);
printf("\nyear");
scanf("%d",&year);
printf("Enter Mobile Number:\n");
scanf("%d",&mob);
printf("Enter Policy Number:\n");
scanf("%d",&pol);
printf("Enter Term:\n");
scanf("%d",&term);
printf("Enter Premium:\n");
scanf("%d",&prem);
printf("Enter Sum Assured:\n");
scanf("%d",&sum);


fprintf(f,"Client Number %d \n %s %s \n D.O.B:%d|%d|%d \n Mobile Number:%d \n Policy Number: %d \n Term: %d \n Premium:%d \n Sum Assured: %d \n \n",i+1,fname,lname,age,month,year,mob,pol,term,prem,sum);
}

fclose(f);

do{
    printf("\nDO you want to Enter Numbers Again:\n1)YES \n2)NO");
    scanf("%d",&b);

    switch(b)
    {
    case 1:
        goto one;
        break;

    case 2:
        printf("Have a Good Day");
        return;
    }

}
while(b<3);

return 0;
}
