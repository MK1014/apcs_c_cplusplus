#include <iostream>
using namespace std;
int main()
{
    int  *i,ii;
    int  a = 5, b = 6,c = 7;
    //int  c;
    //int  a[3] = {1,2,3};
    ii = 3 ;
    //i = i;
    printf(" *i = %d \n", *i);
    printf( " &ii = %p \n",&ii);
    printf( " i = %p  \n", i);

    i = &ii;
    printf(" *i = %d \n", *i);
    printf( " &ii = %p \n",&ii);
    printf( " i = %p  \n", i);

    i = &a;
    printf(" *i = %d \n", *i);
    printf( " &a = %p \n",&a);
    printf( " i = %p  \n", i);

    i = &b;
    printf(" *i = %d \n", *i);
    printf( " &b = %p \n",&b);
    printf( " i = %p  \n", i);

    i = &c;
    printf(" *i = %d \n", *i);
    printf( " &c = %p \n",&c);
    printf( " i = %p  \n", i);

    return 0;
}
