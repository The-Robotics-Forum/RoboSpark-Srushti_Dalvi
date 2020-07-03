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
        printf("\nWant to enter student details ? 1.Yes 2.No\n");
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
    else{
        break;
    }
    }
    printf("id\t\tName\t\tYear\t\tCGPA\n");
for (int j=0;j<i;j++){

        printf("%d\t\t",S[j].stud_id);

        printf("%s\t\t",S[j].stud_name);

        printf("%d\t\t",S[j].stud_year);

        printf("%f\n",S[j].stud_cgpa);

}
}

/*output
Want to enter student details ? 1.Yes 2.No
1

Enter id : 12

Enter student name : vedangi

Enter Year : 3

Enter CGPA : 7.8

Want to enter student details ? 1.Yes 2.No
1

Enter id : 23

Enter student name : swarada

Enter Year : 3

Enter CGPA : 7.6

Want to enter student details ? 1.Yes 2.No
2
id              Name            Year            CGPA
12              vedangi         3               7.800000
23              swarada         3               7.600000

Process returned 0 (0x0)   execution time : 26.592 s
Press any key to continue.


*/


























































































