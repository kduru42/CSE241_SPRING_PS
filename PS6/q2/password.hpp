#ifndef _PASSWORD_HPP_
# define _PASSWORD_HPP_

#include <iostream>
#include <string>

namespace {
    std::string password;
    bool isValid();
}

namespace Authenticate
{
    void inputPassword();
    std::string getPassword();
}

#endif