/*(1)#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

int main()
{
    std::string str;
    while(std::getline(std::cin, str))
    {
        std::istringstream iss(str);
        std::vector<int> v;
        int x;
        while(iss >> x)
        {
            v.push_back(x);
        }
    
        std::sort(v.begin(), v.end(), std::less<int>());
    
        for(int i : v)
        {
            std::cout << i << " ";
            
        } 
    std::cout << " " << '\n';
    }
    
}
*/




