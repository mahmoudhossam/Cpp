#include <iostream>

int add(int *x,int *y)
{
	return *x+*y;
}

int main()
{
	int x,y;
	int  *x_ptr,*y_ptr;
	x = 9;
	y = 7;
	x_ptr = &x;
	y_ptr = &y;
	int result = add(x_ptr,y_ptr);
	std::cout << result << std::endl;
	return 0;
}
