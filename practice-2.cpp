#include<iostream>
using namespace std;
int main(void){
    int i,j,n=10000000,m=1;
    double pow2[m];
   
    for(i=0;i<m;i++){
        pow2[i]=1.0;
        //pow2[i] = 1152921504606846976.000000;        
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){            
            //pow2[j] =  pow2[j] * 2.0;
            //pow2 =  pow2 / 2;
            pow2[j] =  pow2[j] / 2.0;
        }
    }
    #if 0
    for(i=0;i<m;i++){
        printf("2_pow %d = %lf \n",n,pow2[i]);
    }
    #endif
    return 0;
}