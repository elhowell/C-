// Evan Howell, array loop passed by reference
#include <iostream>

using namespace std;

void Output_Array_Info(int *array_ptr, int size)
{
    for(int i = 0; i<=4; i++)
    {
       cout << "Value is " << *array_ptr << " is stored: " << array_ptr<<endl;
	   array_ptr++;
    }
    	
	
}

int main()
{
    const int size = 5;
	int numbers[size] = {5, 7, 8, 9, 1};
	int *pointer;

	pointer = numbers;

    Output_Array_Info(pointer, size);
	cout << sizeof(int) << endl;

	system("pause");
	return 0;
}
