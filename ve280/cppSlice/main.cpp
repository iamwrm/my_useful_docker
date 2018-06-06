#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void showVector(std::vector<T> vIn)
{
	for (auto i = vIn.begin(); i != vIn.end(); i++)
	{
		std::cout << *i;
	}
	std::cout << std::endl;
}

int main(int argc, char const *argv[])
{

	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	std::vector<int> v2(v1.begin() + 2, v1.end());

	showVector(v1);
	showVector(v2);

	return 0;
}
