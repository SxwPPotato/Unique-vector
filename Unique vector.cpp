#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_vector(std::vector<int> vec) {
    std::vector<int> new_vec;
    bool check = false;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < new_vec.size(); j++)
        {
            if (vec[i] == new_vec[j])
                check = true;
        }
        if (check == false)
        {
            new_vec.push_back(vec[i]);
        }
        check = false;
    }

    return new_vec;
}


int main()
{
    std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
   
    //vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    vec = sort_vector(vec);
    std::sort(vec.begin(), vec.end());

    for (int el : vec) {
        std::cout << el << " ";
    }
}
