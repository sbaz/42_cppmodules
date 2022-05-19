#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T const cont, int value)
{
    typename T::const_iterator it;
    
    it = std::find(cont.begin(), cont.end(), value);

    if (it == cont.end())
    {
        std::cout << "Element not found" <<std::endl;
        return 1;
    }
    std::cout << "Element found in container" << std::endl;
    return 0;
    
}

int main()
{
    std::vector<int> vI;

    vI.push_back(3);
    vI.push_back(2);
    vI.push_back(5);
    vI.push_back(37);
    vI.push_back(89);

    return (easyfind(vI, 37));


}