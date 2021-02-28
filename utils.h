#include <iostream>

namespace Utilites
{
    //usage Utilites::Print( 34, "bla", 15);
    template <typename Arg, typename... Args>
    void Print( Arg&& arg, Args&&... args)
    {
        std::cout << std::forward<Arg>(arg);
        ((std::cout << ',' << std::forward<Args>(args)), ...);
    }
}
