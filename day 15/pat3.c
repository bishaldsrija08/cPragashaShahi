/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
#include<stdio.h>
int main(){
    int lines = 5;
    for(int i =1; i<=lines; i++){
        for(int j =1; j<=lines-i+1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int lines = 5;
//     for(int i =lines; i>=1; i--){
//         for(int j =1; j<=i; j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }