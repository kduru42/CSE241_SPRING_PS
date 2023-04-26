#include "password.hpp"

namespace {
    bool isValid()
    {
        if (password.size() < 8) // controlling size
            return (false);
        int flag = 0;
        for (int i = 0; i < password.size(); i++) // controlling non-letter
            if (!isalpha(password[i]))
                flag = 1;
        if (!flag)
            return (false);
        return (true);
    }
}

namespace Authenticate
{
    void inputPassword()
    {
        do
        {
            std::cout << "Enter your password (at least 8 characters " <<
                "and at least one non-letter)" << std::endl;
            std::cin >> password ;
        } while (!isValid());
    }
    std::string getPassword()
    {
        return password;
    }
}