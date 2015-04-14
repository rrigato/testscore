#include <iostream>


class TestScores
{
private:
	int * intptr = 0;


public:
	TestScores(int);
	~TestScores();
};
TestScores::TestScores(int size)
{
	intptr = new int [size];
}

TestScores::~TestScores()
{
	delete[] intptr;
}
int main()
{
	int  array_size = 0;
	std::cout << "Enter how many test scores you have " << std::endl;
	std::cin >> array_size;
	return 0;
}
