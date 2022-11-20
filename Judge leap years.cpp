#include <iostream>
using namespace std;
int main()
{
    int year;
    printf(" 年分:");
    scanf("%d",&year);
    printf(" 年分= %d \n",year);
    if(year % 4 != 0){
        printf("平年");
    }else{
        if( year %4 ==0 && year %100 !=0){
            printf("閏年");
        }else{
            if( year %100 ==0 && year %400 !=0){
                printf("平年");
            }else{
                if( year %400 ==0){
                    printf("閏年");
                }
            }
        }
    }

    return 0;
}
