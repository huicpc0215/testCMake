#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include"math/MyAdditions.h"
#include"math/MyDecrise.h"
using namespace std;

int main(int argc,char *argv[]){
    if( argc < 3 ){
        fprintf(stdout,"arguments too few \n");
        return 0;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    fprintf(stdout,"using own addition method : %d + %d = %d\n",a,b,add(a,b));
    fprintf(stdout,"using own decrise method : %d - %d = %d\n",a,b,dec(a,b));
    return 0;
}
