#ifndef CONTACTCLS_HPP
#define CONTACTCLS_HPP

#include <iostream>
#include <string>

class contact 
{
    private:
    int _index;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;

    public:
    contact();
    ~contact();

    void    init(int i);

    int getindex() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName()const;
    std::string getPhoneNumber() const;
    std::string getDarkSecret() const;

};

#endif