#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

double random (double lower_range_limit, double upper_range_limit)
{
    return lower_range_limit + (rand() * 1. / RAND_MAX) * (upper_range_limit - lower_range_limit);
}

int main()
{
    srand(time(0));
    int count_num;
    double lower_range_limit, upper_range_limit;
    std::cout << "Enter count of nums" << std::endl;
    std::cin >> count_num;
    std::cout << "Enter Lower and upper range limits" << std::endl;
    std::cin >> lower_range_limit >> upper_range_limit;

    std::ofstream outfile ("output.txt");

    for (int i = 0; i < count_num; i++)
    {
        outfile << random(lower_range_limit, upper_range_limit) << " ";
    }
    outfile.close();
    return 0;
}
