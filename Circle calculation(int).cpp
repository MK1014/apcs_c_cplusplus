/*
輸入圓半徑(r),當r >= 0時,計算圓的面積和周長(int)
*/
#include <iostream>
using namespace std;
int main(){
    int r,area,perimeter;
    printf(" 半徑: ");
    scanf("%d", &r);
    printf(" r= %d \n",r);
    if(r >= 0){
        //計算圓的面積和周長
        area = r*r*3.14;
        printf(" area= %d \n",area);
        perimeter = 2*r*3.14;
        printf(" perimeter= %d \n",perimeter);
    }else{
        //輸出'錯誤'
        printf("error \n");
    }
    cout<<"Finished!";
    return 0;
}
