/*
  C Program to display student information(id, name, year,cgpa)
 */
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// structure containing the main variables
struct Student 
{
    int id;
    int year;
    char *name;
    float cgpa;
};

int main()
{
    struct Student std[4]; 
   
    /*
    std[0].id = 11910128;
    std[0].name = "Vaishnavi";
    std[0].year = 2;
    std[0].cgpa = 8.0;

    std[1].id = 11912301;
    std[1].name = "Aniruddha";
    std[1].year = 3;
    std[1].cgpa = 9.24;

    std[2].id = 11710149;
    std[2].name = "Aditya";
    std[2].year = 1;
    std[2].cgpa = 8.7;

    std[3].id = 11814190;
    std[3].name = "Abhita";
    std[3].year = 2;
    std[3].cgpa = 7.83;
    */
   

    for(int i=0;i<=3;i++)
   {
       printf("\n Enter information of student %d :",i+1);
       printf("\n Enter Id: ");
       scanf("%d",&std[i].id);
       printf("\n Enter Name: ");
       scanf(" %[^\n]s",std[i].name =(char *)malloc(100)); // Dynamic memory allocation of the string without creating a fixed array
       printf("\n Enter Year: ");
       scanf("%d",&std[i].year);
       printf("\n Enter CGPA: ");
       scanf("%f",&std[i].cgpa);
   }

   for(int i=0;i<=3;i++)
   {
       printf("\n Information of student %d :",i+1);
       printf("\n Id: %d",std[i].id);
       printf("\n Name: %s",std[i].name);
       printf("\n Year: %d",std[i].year);
       printf("\n CGPA: %.2f\n\n",std[i].cgpa);
   }
}
