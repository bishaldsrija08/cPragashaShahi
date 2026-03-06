// WAP to take age of 10 students and count the numbers of students between 20 and 25 years.
#include<stdio.h>
int main(){
    int age[10];
    int count = 0;
    printf("Enter the ages of 10 students:\n");
    int length = sizeof(age) / sizeof(age[0]);
    for(int i = 0; i < length; i++){
        scanf("%d", &age[i]);
    }

    for(int i = 0; i < length; i++){
        if(age[i]>=20 && age[i]<=25){
            count++;
        }
    }
    printf("The number of students between 20 and 25 years is: %d\n", count);
    return 0;
}