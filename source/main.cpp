#include <iostream>

template<class T>
T stream_get(std::istream& is)
{
    T result;
    is >> result;

    return result;
}

int main()
{
    std::cout << "Are you ready for an adventure? [y/n]: ";

    while (true)
    {
        const auto response = stream_get<char>(std::cin);
        if (response == 'y')
        {
            std::cout << "Too bad; you aren't getting one. This game's no where near finished. Not even by Ubisoft's standards.";
            break;
        }
        else if (response == 'n')
        {
            std::cout << "Oh, alright.";
            break;
        } else
        {
            std::cout << "Were the instructions unclear or are you just of the rebellious kind? Try again [y/n]: ";
        }
    }
}
