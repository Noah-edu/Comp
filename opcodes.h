#include <string>
#include <map>

#define SEMI 0 // ;

//TYPES
#define INT 1
#define DOUBLE 2

#define EQUALS 3

#define VAR 99

struct {
std::map<const std::string, unsigned int> Opcodes { {";", 0}, {"int", 1}, {"double", 2}, {"=",3} };
} tok;
