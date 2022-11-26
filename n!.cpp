#include <iostream>
using namespace std;
#if 1

//f(n) = n*f(n-1)
int multiplyNumbers(int n){
    int tmp = 1;
    for(int i=n;i>=1;i--)
        tmp*=i;
    return tmp;
}
#else
int multiplyNumbers(int n){
    if(n>=1)
        returnn*multiplyNumbers(n-1);
    else
        returnn 1;
}
#endif
int main()
{
    printf("1! = %d \n",multiplyNumbers(1));
    printf("2! = %d \n",multiplyNumbers(2));
    printf("3! = %d \n",multiplyNumbers(3));
    printf("4! = %d \n",multiplyNumbers(4));
    printf("5! = %d \n",multiplyNumbers(5));
    printf("6! = %d \n",multiplyNumbers(6));
    printf("7! = %d \n",multiplyNumbers(7));
    printf("8! = %d \n",multiplyNumbers(8));
    printf("9! = %d \n",multiplyNumbers(9));
    printf("10! = %d \n",multiplyNumbers(10));
    return 0;
}
