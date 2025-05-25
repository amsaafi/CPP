#ifndef PHONEBOOKCLS_HPP
#define PHONEBOOKCLS_HPP

#include "contactcls.hpp"

class phonebook
{
    private:
    contact book[8];
    static int  _i;

    public:
    phonebook();
    ~phonebook();

    void    addContact();
    void    search() const;
    void    printContact(int i) const;
    int    geti() const;
};

#endif