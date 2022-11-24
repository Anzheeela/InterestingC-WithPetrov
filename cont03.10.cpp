/*(1)void swap(int * a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}*/



/*(2)int const *max_element(IntConstRange range){
    int const *a = range.begin;
    if (range.begin == range.end){

    }
    else{
    for (int *i = range.begin; i < range.end; i++){
        if (*i > *a){
            
        }
        
    }
    }
return a;
}*/


/*(5)int const *lower_bound(IntConstRange range, int n){
//    const int * mid = 1;
    while (range.end != range.begin){
        int const *mid = range.begin + (range.end - range.begin)/2;
        if (!(*mid < n)){
            range = {range.begin, mid};
        }
        else{
            range = {mid +1, range.end};        
        }
        
    }
    return range.begin;
}*/




/*struct vec3

{

    float x, y, z;

};

struct mat3

{

    vec3 x, y, z;

};

mat3 transpose(mat3 m){
    mat3 m1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; ++j){
            mt[i][j] = m[j][i];
        }
    }
    return mt;
}*/

/*void selection_sort(IntRange)
{
    for (int *i = range.begin; i < range.end; i++)
    {
        swap(max_element(range), range.begin);

    }
}*/

/*#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

struct IntConstRange
{
    int *begin;
    int *end;
};

int const *find(IntConstRange range, int n)
{
    for (int *i = range.begin; i < range.end + 1; i++)
    {   
        a = i;
        if (*i == n)
        break;
    }

return a;
}

int main()
{
    int a [4] = {1, 2, 3, 4};
    IntConstRange range = {a, a + 4};
    std::cout << find(range, 4);
}*/
1 3 2 4 2 
5 6 3 2 4
6 3 7 2 4