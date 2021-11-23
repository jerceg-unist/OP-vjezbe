#include "vector.hpp"

void MyVector::vector_new (size_t sz)
{
}
void MyVector::vector_delete()
{
}
void MyVector::vector_push_back(int n)
{
}
void MyVector::vector_pop_back()
{
}
int& MyVector::vector_front()
{
}
int& MyVector::vector_back()
{
}
size_t MyVector::vector_size()
{
}
void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
