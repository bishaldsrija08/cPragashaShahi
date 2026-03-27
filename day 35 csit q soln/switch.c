#include<stdio.h>

int main(){
    int choice, n, i, flag=0;

    printf("1.Prime\n2.Positive/Negative/Zero\n3.Even/Odd\n4.Exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter a number: ");
            scanf("%d",&n);
            for(i=2;i<=n/2;i++){
                if(n%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0 && n>1)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d",&n);
            if(n>0) printf("Positive");
            else if(n<0) printf("Negative");
            else printf("Zero");
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d",&n);
            if(n%2==0) printf("Even");
            else printf("Odd");
            break;

        case 4:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }
}