//vote eligibility programme
#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);

    if(age>=18){
        printf("you are adult\n");
        printf("you are eligible to vote");
    }
    else{
        printf("you are not eligible,sorry!");
    }
}