#ifndef _USER_HPP_
# define _USER_HPP_

#include <iostream>
#include <string>

namespace {
    std::string username;
    bool isValid();
}

namespace Authenticate
{
    void inputUserName();
    std::string getUserName();
}


#endif 