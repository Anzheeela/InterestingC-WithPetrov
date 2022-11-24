#include<iostream>
#include<cstdlib>
std::size_t strlen(char const * a){
std::size_t i = 0; 
while (a[i] != '\0')
{
    i++;
}
return i;
}


char *strcat(char const *a, char const *b){
    std::size_t l1 = strlen(a);
    std::size_t l2 = strlen(b);
    void *cpam = std::malloc((l1 + l2 + 1) * sizeof(char));
    char *pam = static_cast<char *>(cpam);
    for (std::size_t i = 0; i < l1; i++){
        pam[i]= a[i];
    }
    for (std::size_t i = l1; i < l1+l2; i++){
        pam[i]= b[i-l1];
    }
    
    pam[l1+l2] = '\0';
    return pam;
}
