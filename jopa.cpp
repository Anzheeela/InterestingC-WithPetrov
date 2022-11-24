#include<iostream>

std::size_t strlen(char const * a){
    std::size_t i = 0; 
    while (a[i] != '\0')
    {
        i++;
    }
return i;
}
std::int64_t myatoi(char const * p){
    std::int64_t s = 0;
    std::int64_t k = 1;
    std::int64_t l = strlen(p);ls
    for (std::int64_t i = l - 1; i > -1; i--){
    
//       for (std::int64_t j = 0; j < l - 1; j++){
//            k = k * 10;
//            l = l - 1;
//        }
    s = s + int(p[i] - '0') * k;
    k = k * 10;
    }
    return s;
}

int main()
{
    char const * p = "543";
    std::cout << myatoi(p) << std::endl;
    return 0;
}