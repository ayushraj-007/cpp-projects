#include <iostream>
#include <string>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    int random_number = std::rand() % 100 + 1;
    int guess_number;
    std::cout<<"this is a game to guess a random number\n";
     std::cout<<"guess a number\n";
     int i = 1;
    do
    {
       
    std::cin >> guess_number;
       
        /* code */
        if (guess_number == random_number)
        {
            /* code */
            std::cout << "hurreh you guess the number in " << i << " time";
        }
        else
        {
            
            if (guess_number < random_number)
            {
                std::cout << "you are wrong.guess a higher number\n";
            }
            else
            {
                std::cout << "you are wrong.guessn a lower number\n";
            }
            i++;
        }
    } while (guess_number != random_number);
    return 0;
}
