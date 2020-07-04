#include<stdio.h>
struct stud
{
    int stud_id;
    char stud_name[35];
    int stud_year;
    float stud_cgpa;
};

int main(){
    struct stud S[100];
    int choice;
    int i=0;
    while (1)
    {
        printf("\noptions:- 1.Enter Student's info 2.Show students data 3.Exit\n");
        scanf("%d",&choice);
    if(choice==1){
        printf("\nEnter id : ");
        scanf("%d",&S[i].stud_id);

        printf("\nEnter student name : ");
        scanf("%s",&S[i].stud_name);

        printf("\nEnter Year : ");
        scanf("%d",&S[i].stud_year);

        printf("\nEnter CGPA : ");
        scanf("%f",&S[i].stud_cgpa);
        i++;
    }
    if(choice==2){
         printf("id\t\tName\t\tYear\t\tCGPA\n");
for (int j=0;j<i;j++){

        printf("%d\t\t",S[j].stud_id);

        printf("%s\t\t",S[j].stud_name);

        printf("%d\t\t",S[j].stud_year);

        printf("%f\n",S[j].stud_cgpa);

}
    }
    if(choice==3)
    {
    break;
    }
    }

}




























































































