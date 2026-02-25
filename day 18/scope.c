#include<stdio.h>
int glo = 78;

void hello(){
    int a = 10;
    printf("%d from hello\n", a);
     printf("%d from hello\n", glo);
}

int main(){
    int a =20;
    printf("%d from main\n", a); // error: 'a' undeclared (first use in this function)
    hello();
    printf("%d from main\n", glo);
    return 0;
}


for(int i = 1; i <= 5; i++){
    int abc = 5656; // this variable is only accessible inside the for loop
    printf("%d ", i);
}
printf("%d ", i); // error: 'i' undeclared (first use in this function)