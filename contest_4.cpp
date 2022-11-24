#include <iostream>

using u64 = std::uint64_t;

u64 popcount(u64 n){
    u64 num = 0;
    
while (n!=0){
    if (n%2==1){
        num +=1;
        n = n/2;
    }
    else {
        n = n/2;
    }
    }
return num;
}
int main(){
   std::cout << popcount(987654321) <<std::endl;
 }
