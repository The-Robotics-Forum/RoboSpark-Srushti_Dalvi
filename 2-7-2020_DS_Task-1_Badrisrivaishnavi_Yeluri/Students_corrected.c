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
    int n,c;
    while(1) // infinite loop until choose to exit
    {
        printf("\n Enter number of students for data collection: "); // Asking the user num of students to save memory in array
        scanf("%d",&n);
        struct Student std[n]; 
        printf("\nPress 1 to enter data");
        printf("\nPress 2 to display data");
        printf("\nPress 3 to exit\n");
        scanf("%d",&c);
        switch(c) // For user interface - giving a choice
        {
            case 1:         //Entering student data
                for(int i=0;i<n;i++)
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
                break;
            case 2:         //Displaying student data
                for(int i=0;i<n;i++)
                {
                    printf("\n Information of student %d :",i+1);
                    printf("\n Id: %d",std[i].id);
                    printf("\n Name: %s",std[i].name);
                    printf("\n Year: %d",std[i].year);
                    printf("\n CGPA: %.2f\n\n",std[i].cgpa);
                }
                break;
            case 3:         //Exit by choice
                exit(0);
                break;
            default:
                printf("\n Invalid choice");
        }
    } 
}  