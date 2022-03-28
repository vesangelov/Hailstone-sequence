#include <iostream>

void hailstoneSequence(int number) {

    int counter = 0;

    if (number <= 0) {
        std::cout << "The number can't be a solution" << std::endl;
    }
    else {

        while (number != 1) {
            if (number % 2 == 0) {
                number /= 2;
                std::cout << number << " ";
                counter++;
            }
            else {
                number = (number * 3) + 1;
                std::cout << number << " ";
                counter++;
            }
        }

        std::cout << std::endl;
        std::cout << counter << std::endl;
    }

}

int main()
{
    int hailstoneNumber = 0;
    std::cout << "Please insert hailstone number: " << std::endl;
    std::cin >> hailstoneNumber;

    hailstoneSequence(hailstoneNumber);

    return 0;
}