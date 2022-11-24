#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

/*int main()
{
    int n;
    int mesto = 0;
    std::cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            mesto = mesto + a[i];
        }
        else 
        {
            mesto = mesto - a[i];
        }
        
    }
    std::cout << mesto;
}*/


/*#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

int main()
{
    int n;
    int s1 = 0;
    int s2 = 0;
    int otv = 0;
    std::cin >> n;
    int a[118];
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        s1 = s1 + a[i];
    }
    for (int j = 0; j < n + 1; j++)
    {
        s2 = s2 + j;
    }
    otv = s2 - s1;
    std::cout << otv;
}*/
/*#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

unsigned long long int primorial(int n)
{
    unsigned long long int pr = 1;
    int a[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    for (int j = 0; j < n + 1; j++)
    {
        for (int i = 0; i < 16; i++)
        {
        if (j == a[i])
        pr = pr * j;
        }
    }
    return pr;
}

int main()
{
        int n;
        std::cin >> n;
        std::cout << primorial(n) << std::endl;
        return 0;
}*/

#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>

char ouija[3][13]  = {
                {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'},
                {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
                {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '!', '?'}
        };
void message(int i_start, int j_start, int length)
{
    int str[50], stolb[50];
    std::string v;
    v.push_back(ouija[i_start][j_start]);
    for (int i = 0; i < length - 1; i++)
    {
        std::cin >> str[i] >> stolb[i];
    }
    for (int k = 0; k < length - 1; k++)
    {
        int i_start = str[k] + i_start;
        int j_start = stolb[k] + j_start;
        if ((i_start > 3) || (j_start > 13))
        {
            std::cout << "THE SPIRITS ARE RESTLESS";
            break;
        }
        else
        v.push_back(ouija[i_start][j_start]);
    }
    
    if (v.length() != 1){
    for (int i = 0; i < length; i++)
    std::cout << v[i];
    }
}



int main()
{
        int i_swap_0, j_swap_0, i_swap_1, j_swap_1;
        std::cin >> i_swap_0 >> j_swap_0 >> i_swap_1 >> j_swap_1;
        char tmp = ouija[i_swap_0][j_swap_0];
        ouija[i_swap_0][j_swap_0] = ouija[i_swap_1][j_swap_1];
        ouija[i_swap_1][j_swap_1] = tmp;

        int i_start, j_start, length;
        std::cin >> i_start >> j_start >> length;
        message(i_start, j_start, length);

        return 0;
}