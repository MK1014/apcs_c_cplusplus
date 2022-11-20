//只會顯示不會被整除的
//顯示會被整除的須改21行'==0'
#include <iostream>
using namespace std;

int main()
{
    int m,y;
    printf("年分:");
    scanf("%d",&y);
    printf("月份:");
    scanf("%d",&m);
    if(y % 4 != 0){
        switch(m){
            case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
            printf("the month is 31 date");
            break;
            case 4: case 6: case 9: case 11: 
            printf("the month is 30 date");
            break;
            default:
            printf("the month is 28 date");
            break;
        }
    }
    return 0 ;
}
