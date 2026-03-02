#include<stdio.h>
void simpleInt(int p, int t, int r){
    int si = (p * t * r) / 100;
    printf("Simple Interest for principal %d, time %d years and rate %d%% is %d\n", p, t, r, si);
}
int main(){
    simpleInt(1000, 2, 5);
    simpleInt(2000, 3, 7);
    return 0;
}