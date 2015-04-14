#include <iostream>


class TestScores
{
private:
	int * intptr;


public:
	TestScores();
	TestScores(int);
	~TestScores(); // dealocates dynamically allocated memory
	void set_tests(int, int); // mutator
	int get_number_of_tests() const;
	double get_average() const;
};

TestScores::TestScores()
{
	intptr = new int[5];
}
TestScores::TestScores(int size)
{
	intptr = new int [size];
}

void TestScores::set_tests(int element_number, int test_score)
{
	intptr[element_number] = test_score;
}

TestScores::~TestScores()
{
	delete[] intptr;
}
int TestScores::get_number_of_tests() const
{
	return 0;
}

double TestScores::get_average()const
{
	return 0;
}

int main()
{
	int  array_size = 0;
	std::cout << "Enter how many test scores you have " << std::endl;
	std::cin >> array_size;
	TestScores tests(array_size);
	for (int i = 0; i < array_size; i++)
	{
		int score = 0;
		std::cout << "Enter the test score number " << i + 1 << std::endl;
		std::cin >> score;
		tests.set_tests(i, score);
	}


	return 0;
}
