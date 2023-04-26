#include "user.hpp"

namespace {
    bool isValid()
    {
        if (username.size() != 8) // controlling size
            return (false);
        else
            return (true);
    }
}

namespace Authenticate
{
    void inputUserName()
    {
        do
        {
            std::cout << "Enter your username (8 letters only)" << std::endl;
            std::cin >> username;
        } while (!isValid());
    }
    std::string getUserName()
    {
        return username;
    }
}