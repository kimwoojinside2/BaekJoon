#include<stdio.h>
int main(void){
    int t,n,m,temp1,temp2;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        for(int j=0;j<m;j++)
            scanf("%d %d",&temp1,&temp2);
        printf("%d\n",n-1);
    }
    return 0;
}