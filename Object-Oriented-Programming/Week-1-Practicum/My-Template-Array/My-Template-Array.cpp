#include <iostream>

template <typename T> 

struct Array {
	T* data;
	int size = 256;

	Array(const int size) {
		data = new T[size];
		this->size = size;
	}

	int getSize() const {
		return this->size;
	}

	void printArr() {
		for (int i = 0; i < this->size; i++)
		{
			std::cout << data[i] << " ";
		}
		std::cout << std::endl;
	}
};


int main()
{
	Array<int> arr(4);
	std::cout << arr.getSize();
}
