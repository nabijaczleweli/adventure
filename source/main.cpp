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
        switch(stream_get<char>(std::cin))
        {
            case 'y': std::cout << "Too bad; you aren't getting one. This game's no where near finished. Not even by Ubisoft's standards" << std::endl;
                      break;
            case 'n': std::cout << "Oh, alright." << std::endl;
                      break;

            default: std::cout << "Were the instructions unclear or are you just of the rebellious kind? Try again [y/n]: ";
        }
    }
}