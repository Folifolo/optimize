#include <algorithm>
#include <ctime>
#include <iostream>

int main(int argc, char* argv[])
{
    const unsigned arraySize = 32768;
	int* data = new int[arraySize];

    for (unsigned c = 0; c < arraySize; ++c)
        data[c] = std::rand() % 256;


	if (argc > 1)
		if(argv[1][0] == '0')
			std::sort(data, data + arraySize);

    long long sum = 0;

    for (unsigned i = 0; i < 400000; ++i)
    {
        for (unsigned c = 0; c < arraySize-1; ++c)
        {
			if (data[c] >= 128)
			{
				if (data[c] <= 200)
					sum += data[c];
			}
        }
    }
    std::cout << "sum = " << sum << std::endl;
}