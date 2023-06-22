#include<stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t); //test cases
    for(int i=1;i<=t;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        if(x>10*y){
            printf("YES\n"); //spam
        }
        else{
            printf("NO\n");
        }
    }
}
