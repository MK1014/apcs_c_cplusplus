#include <stdio.h>
int main(){
    int a = 20 , b = 5 , x;
    printf(" A => ");
    scanf("%d" , &a);
    printf(" B => ");
    scanf("%d", &b);
    printf(" A+B=%d \n" , a+b);
    //printf(" A % B = %d \n" ,a%b);
    //printf("a mod b = %d\n" , (a % b));
     x=22;
     x += 4;
    printf("x= %d \n",x);
     x=22;
     x= x+4;
    printf("x= %d \n",x);
     x=22;
     x /= 4;
    printf("x= %d \n",x);
     x=22;
     x %= 4;
    printf("x= %d \n",x);
     x=22;
     x &= 4;
    printf("x= %d \n",x);
     x=22;
     x |= 4;
    printf("x= %d \n",x);
     x=22;
     x ^= 4;
    printf("x= %d \n",x);
     x=22;
     x >>= 4;
    printf("x= %d \n",x);
     x=22;
     x <<= 4;
    printf("x= %d \n",x);
    return 0;
}

