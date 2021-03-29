
#include "vectorFunctions.hpp"
#include <iostream>
std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector <std::shared_ptr<int>> vec;
    for (int i = 0; i < count; ++i )
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>>vec)
{
  for(const auto& el: vec)
    std::cout<<*el<<", ";  
}
void add10(std::vector<std::shared_ptr<int>>vec)
{
for(auto & el : vec)
{ 
    if (el != nullptr)
        {
            *el += 10 ;
        }
    }
}
void sub10(int* const intPtr) {
    if (intPtr) {
        *intPtr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& el : vec) {
        sub10(el.get());
    }
} 