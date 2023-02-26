#include<stdio.h>
int f(int num){
    if(num>1){
        return num*f(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n=0;
    int r=0;
    scanf("%d",&n);
    r=f(n);
    printf("%d",r);
    return 0;
}