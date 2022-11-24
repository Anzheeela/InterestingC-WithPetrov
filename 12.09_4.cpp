#include <iostream>
 double pow(double x, int a){
    if (a>0){
        if (a%2 ==0) {
            return pow(x, a/2)*pow(x, a/2);
        }
        else {
            return pow(x, (a-1))*x;
        }
    }
    if (a == 0){
        return 1;
    }
    if (a<0){
    return 1/pow(x, -a);
    }
 }

 int main(){
   std::cout << pow(5, 100000000-1) <<std::endl;
 }