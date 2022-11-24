#include <iostream>
using u64 = std::uint64_t;
/**u64 factoriall(u64 n)
{
    u64 res = 1;
    for (int i = 1; i < n+1; ++i)
    {
        res = res * i;
    }
    return res;
}**/
u64 factorial(u64 const n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
#include <iostream>
int main()
{
    u64 n = 0;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
    return 0;
}
