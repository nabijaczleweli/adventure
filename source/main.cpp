#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Are you ready for an adventure? [y/n]: ";

    while (true)
    {
        std::string response;
        std::getline(std::cin, response);
        std::transform(response.begin(), response.end(), response.begin(), [](auto c) { return std::tolower(c); });
        if (response == "y" || response == "yes")
        {
            std::cout << "Too bad; you aren't getting one. This game's no where near finished. Not even by Ubisoft's standards.";
            break;
        }
        else if (response == "n" || response == "no")
        {
            std::cout << "Oh, alright.";
            break;
        }
        else
        {
            std::cout << "Were the instructions unclear or are you just of the rebellious kind? Try again [y/n]: ";
        }
    }
}
