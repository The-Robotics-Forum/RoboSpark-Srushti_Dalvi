


#include <stdio.h>
#include <stdlib.h>

struct student {
    int stud_id;
    char stud_name[30];
    int stud_year;
    float stud_cgpa;
};


int main()
{
    struct student student1;
    struct student student2;
    struct student student3;
    struct student student4;
    
    printf("/nEnter details of the first student");
    printf("\nEnter student id");
    scanf("%d",&student1.stud_id);
    printf("\nEnter student name");
    scanf("%s",student1.stud_name);
    printf("\nEnter student year ");
    scanf("%d",&student1.stud_year);
    printf("\nEnter student cgpa");
    scanf("%f",&student1.stud_cgpa);
    
     printf("/nEnter details of the second student");
    printf("\nEnter student id");
    scanf("%d",&student2.stud_id);
    printf("\nEnter student name");
    scanf("%s",student2.stud_name);
    printf("\nEnter student year ");
    scanf("%d",&student2.stud_year);
    printf("\nEnter student cgpa");
    scanf("%f",&student2.stud_cgpa);
    
     printf("/nEnter details of the third student");
    printf("\nEnter student id");
    scanf("%d",&student3.stud_id);
    printf("\nEnter student name");
    scanf("%s",student3.stud_name);
    printf("\nEnter student year ");
    scanf("%d",&student3.stud_year);
    printf("\nEnter student cgpa");
    scanf("%f",&student3.stud_cgpa);
    
     printf("/nEnter details of the fourth student");
    printf("\nEnter student id");
    scanf("%d",&student4.stud_id);
    printf("\nEnter student name");
    scanf("%s",student4.stud_name);
    printf("\nEnter student year ");
    scanf("%d",&student4.stud_year);
    printf("\nEnter student cgpa");
    scanf("%f",&student4.stud_cgpa);
    
    
    printf("\nDetails of the first student");
    printf("\n %d  %s  %d  %f",student1.stud_id,student1.stud_name,student1.stud_year,student1.stud_cgpa );
    
    printf("\nDetails of the second student");
    printf("\n %d  %s  %d  %f",student2.stud_id,student2.stud_name,student2.stud_year,student2.stud_cgpa );
    
    printf("\nDetails of the third student");
    printf("\n %d  %s  %d  %f",student3.stud_id,student3.stud_name,student3.stud_year,student3.stud_cgpa );
    
    printf("\nDetails of the fourth student");
    printf("\n %d  %s  %d  %f",student4.stud_id,student4.stud_name,student4.stud_year,student4.stud_cgpa );
    
    
    
}

