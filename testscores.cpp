#include <iostream>


class TestScores
{
private:
	int * intptr;
	int number_of_tests;


public:
	TestScores();
	TestScores(int);
	~TestScores(); // dealocates dynamically allocated memory
	void set_tests(); // mutator
	int get_number_of_tests() const;
    float get_average() const;
	void get_scores() const;
};

TestScores::TestScores()
{
	intptr = new int[5];
}
TestScores::TestScores(int size)
{
	intptr = new int [size];
	number_of_tests = size;
}

void TestScores::set_tests()
{
    int score = 0;
    for (int i = 0; i < number_of_tests; i++)
	{

		std::cout << "Enter the test score number " << i + 1 << std::endl;
		std::cin >>score;
        intptr[i] = score;
	}


}

void TestScores::get_scores() const
{
    for (int i= 0; i < number_of_tests; i++)
    {
        std::cout << "The score for test " << i+1 << " is " << intptr[i] <<std::endl;

    }
}
TestScores::~TestScores()
{
	delete[] intptr;
}
int TestScores::get_number_of_tests() const
{
	return number_of_tests;
}

float TestScores::get_average()const
{
    int sum =0;
    for (int i =0; i< number_of_tests; i++)
    {
        sum += intptr[i];
    }
	return static_cast<double>(sum) / static_cast<double>(number_of_tests);
}

int main()
{
	int  array_size = 0;
	std::cout << "Enter how many test scores you have " << std::endl;
	std::cin >> array_size;
	TestScores tests(array_size);
	tests.set_tests();
	tests.get_scores();
    std::cout << "The average of the test scores is " << tests.get_average() <<std::endl;
    std::cin.get();
	return 0;
}
