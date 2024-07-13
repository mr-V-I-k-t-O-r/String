#ifndef STRING_H
#define end '\0'
#define STRING_H
#include <iostream>

class String{
    char* string;
    int len;
    int capacity;
    int free;
    
public:
    String();
    String(char* str);
    String(String& str);
    String(std::string str);

    String operator+ (char* str);
    String operator+ (String str);
    String operator+ (std::string str);

    String operator* (int num);

    String find(char* str);
    String find(String str);
    String find(std::string str);

    friend std::ostream& operator<< (std::ostream& os, String str);
    friend std::istream& operator>> (std::istream& is, String str);

    int length();

    char * c();
};

std::ostream& operator << (std::ostream& os, String str);
std::istream& operator >> (std::istream& is, String str);

#endif