#include<stdio.h>
#include<stdlib.h>
int push(char element, char* stack, int top){
     stack[++top]=element;
     return top;
}

int pop(char *stack,int top){
    top--;
    return top;
}

int isEmpty(int top){
    if(top==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

char top_element(int top, char* stack){
    return(stack[top]);
}

int main(){
   int top=-1;
   char stack[10];
   int x=0,flag=0;

   char iString[100];
   scanf("%s",iString);

   while(iString[x]!='\0'){
       if (iString[x]=='(')
       {
           top=push(iString[x],stack,top);

       }
       else if (iString[x]==')')
       {
            if(!isEmpty(top)){
                top=pop(stack,top);
            }
            else
            {
                flag++;
            }


       }
       else
       {
           printf("Invalid String");
       }
   x++;
   }
    if(isEmpty(top) && flag==0){
        printf("\n balanced bracket string");
    }
    else
    {
        printf("\nnot a balanced bracket string");
    }

}




/*output
(()

not a balanced bracket string
Process returned 0 (0x0)   execution time : 3.092 s
Press any key to continue.*/
