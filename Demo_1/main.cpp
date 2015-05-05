#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(int argc,char *argv[]){
    if( argc<3 ){
        fprintf(stdout,"too few arguments\n");
        return 0;
    }
    fprintf(stdout,"add operation, %d+%d=%d\n",atoi(argv[1]),atoi(argv[2]),atoi(argv[1])+atoi(argv[2]));
    return 0;
}
