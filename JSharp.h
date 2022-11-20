#include <stdio.h>
#define start int main(){
#define then ){
#ifdef linux
    #include <unistd.h>
    #define sleep(sec) sleep(sec);
#elif WIN32
    #include <windows.h>
    #define sleep(miliSec) Sleep(miliSec);
#endif

#define end }
#define endStart return 0; end
#define print(x) printf(x);
#define if if(
#define elseif }if
#define newLine() print("\n")
#define while while(
#define for for(
#define switch switch(
