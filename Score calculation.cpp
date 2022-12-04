
#include <iostream>

using namespace std;

float print_sum(int score[],int n){
    float f_ret;
    int  i, sum=0;
    for(i=0;i<n;i++){
        //print("%p ",&score[i]);
        sum += score[i];
    }
    f_ret = sum / n;
    return f_ret;
}

float add(int x,int y){
    float ret;
    printf("%p %p \n ",&x,&y);
    ret = x+y;
    return ret;
}

int main(void)
{
    int n=5,i;
    int score[5];
    int u_c = 0,temp;
    float aver;
    printf("please input 5 score:\n");
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
        if(score[i]<60){
            u_c++;
        }
    }
    aver = print_sum(score,n);
    printf("\nscore average = %f\n",aver);
    temp = add(score[0],score[1]);
    printf("too score add = %d\n",temp);
    printf("%p %p \n ",&score[0],&score[1]);
    if(u_c == 0){
        printf("ALL pass!\n");
    }else{
        printf("need to put more attentions , have %d courses\n",u_c);
    }
    return 0;
}
