#include <iostream>

namespace Utilites
{
    //Usage Utilites::Print( 34, "bla", 15);
    //Credits https://stackoverflow.com/a/27375675 
    template <typename Arg, typename... Args>
    void Print( Arg&& arg, Args&&... args)
    {
        std::cout << std::forward<Arg>(arg);
        ((std::cout << ',' << std::forward<Args>(args)), ...);
    }
}
