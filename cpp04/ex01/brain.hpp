#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    private :

        std::string ideas[100];
    public :
    
        Brain();
        Brain(Brain const &b);
        Brain& operator=(Brain const &b);
        ~Brain();
    
        std::string get_idea(int i) const;
        void set_idea(std::string k, int i);
};

#endif