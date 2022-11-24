std::size_t strlen(char const * a){
std::size_t i = 0; 
while (a[i] != '\0')
{
    i++;
}
return i;
}

void reverse(char * a){
    int i, j, l;
    l = strlen(a);
    i = 0;
    j = l - 1;
    while (i<j){
        i = a[i];
        a[i]=a[j];
        a[j]=i;
        i++;
        j--;
    }
}