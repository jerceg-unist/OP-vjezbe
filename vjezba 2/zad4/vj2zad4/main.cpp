#include "vector.hpp"
using namespace std;
int main()
{
    MyVector mv;
    mv.vector_new();

    int m;
    cout << "Enter the element, Ctrl+d (Linux) or Ctrl+z (Windows) to end input: " << endl;
    while(cin >> m)
        mv.vector_push_back(m);
    cout << "The first element:  " << mv.vector_front() << endl;
    cout << "The last element: " << mv.vector_back() << endl;
    mv.print_vector();
    cout << "Last element removed" << endl;
    mv.vector_pop_back();
    mv.print_vector();

    cout << "Size: " << mv.vector_size() << endl;
    cout << "Capacity: " << mv.capacity << endl;

    mv.vector_delete();
}
