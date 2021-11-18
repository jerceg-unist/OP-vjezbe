#include <cstddef>
#include <iostream>
using namespace std;
struct MyVector
{
	int* myArray;
	size_t size, capacity;
	void vector_new(size_t& size, int&(int* myArray), size_t& capacity) {
		myArray = (new int[size]);
		for (int i = 0; i < size;i++)
		{
			cout << "Enter " << i + 1 << ". vector element:" << endl;
			cin >> myArray[i];
		}
		capacity = sizeof(myArray) / sizeof(myArray[0]);
		if (capacity == size)
		{
			myArray = new int[size * 2];
			capacity = size * 2;
		}
	}
	void vector_delete(size_t& size, int&(int* myArray), size_t& capacity) {
		for (int i = 0; i < capacity; ++i)
		{
			delete myArray[i];
		}
	}
	void vector_push_back(int n, size_t& size, int&(int* myArray), size_t& capacity) {
		myArray[size + 1] = n;
		if (size == capacity)
			myArray = new int[size * 2];
	}
	void vector_pop_back(size_t& size, int&(int* myArray), size_t& capacity) {
		myArray = new int[size - 1];
	}
	int& vector_front(size_t& size, int&(int* myArray), size_t& capacity) {
		return myArray[0];
	}
	int& vector_back(size_t& size, int&(int* myArray), size_t& capacity) {
		return myArray[size];
	}
		size_t vector_size(size_t& size, int&(int* myArray), size_t& capacity) {
		int cnt;
		for (int i = 0; i < capacity; i++)
		{
			if (myArray[i])
				cnt++;
		}
		return cnt;

	}
		void print_vector(size_t& capacity, int& (*int* myArray), size_t& size) {
		for (int i = 0; i < size; i++)
			cout << myArray[i];
	}
};
int main()
{
	MyVector mv;
	mv.vector_new();

	int m;
	cout << "Unter element, Ctrl+d (Linux) ili Ctrl+z (Windows) to end input." << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "The first element: " << mv.vector_front() << endl;
	cout << "The last element: " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "Last element removed" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "Size: " << mv.vector_size() << endl;
	cout << "Capacity: " << mv.capacity << endl;

	mv.vector_delete();
}
