#include <exception>

class SequenceError: public std::exception{

public:

    /*virtual*/const char* what() const throw();
};

inline const char* SequenceError::what() const throw()
{
    return "incorrect sequence! A sequence must consist of and only of {A, C, T, G}";
}