#include<stdio.h>
int area(int l, int b){
    int area = l*b;
    return area;
}
int main(){
    printf("The area is: %d\n", area(5, 10));
    return 0;
}