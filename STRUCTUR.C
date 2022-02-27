#include<stdio.h>
#include<conio.h>
#define max 50
struct student
{
int rollno;
char name[20];
}stud[max];
void main()
{
int n,i;
clrscr();
printf("enter how many records you want to enter : ");
scanf("%d",&n);
printf("\n-------------------------------------------");
for(i=0;i<n;i++)
{
printf("\n\n---------------------------------");
printf("\nenter student number %d details",i+1);
printf("\n---------------------------------");
printf("\nenter student rollno = ");
scanf("%d",&stud[i].rollno);
printf("\nenter student name   = ");
scanf("%s",&stud[i].name);
}
for(i=0;i<n;i++)
{
printf("\n\n========================");
printf("\nstudent detail number %d",i+1);
printf("\n========================");
printf("\nstudent rollno = %d ",stud[i].rollno);
printf("\nstudent name   = %s ",stud[i].name);
}
getch();
}

