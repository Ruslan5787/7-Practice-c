#include <iostream>;
#include <string.h>
#include <set>
using namespace std;

struct Person {
	string name;
	string relative;
};

void fun(Person* persons, int personsLength, int start)
{
	if (start == personsLength) {
		return;
	}

	cout << persons[start].name << " - " << persons[start].relative << std::endl;

	if (start > 0 && persons[start].name == persons[start - 1].relative) {
		cout << persons[start - 1].name << " - " << persons[start].relative << std::endl;
	}

	start++;

	fun(persons, personsLength, start);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Person ivan;
	Person petr;
	Person sasha;

	ivan.name = "Иван";
	ivan.relative = "Петр";

	petr.name = "Петр";
	petr.relative = "Семен";
	
	sasha.name = "Саша";
	sasha.relative = "Иван";




	const int arrLength = 3;

	Person persons[arrLength] = { ivan, petr, sasha };

	fun(persons, arrLength, 0);
}
