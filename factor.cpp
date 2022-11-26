#include<iostream>
using namespace std;
int main(void){
    int n=60;
    int i;
    for(i=2;i<=60;i++){
        if(n % i ==0){
            printf("%d ",i);
        }
    }
    return 1;
}