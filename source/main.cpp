// The MIT License (MIT)

// Copyright (c) 2015 Skorezore

// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

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
