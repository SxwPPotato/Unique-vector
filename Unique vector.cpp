#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
   
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    for (int el : vec) {
        std::cout << el << " ";
    }
}
