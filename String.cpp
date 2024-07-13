#include "String.h"

String::String(){
    string = nullptr;
    len = 0;
}

String::String(char* str){
    char* buff = str;
    while(*buff != '\0'){
        ++buff;
    }
    len = buff - str;
    capacity = 2 * len;
    free = len;
    delete[] string;
    string = new char[capacity];
    for(int i = 0; i < len; ++i){
        string[i] = str[i];
    }
    string[len] = '\0';
}

String::String(String& str){
    len = str.length();
    capacity = 2 * len;
    free = len;
    delete[] string;
    string = new char[capacity];
    char* buff = str.c();
    for(int i = 0; i < len; ++i){
        string[i] = buff[i];
    }
    string[len] = '\0';
}

String::String(std::string str){
    len = str.length();
    capacity = 2 * len;
    free = len;
    delete[] string;
    string = new char[capacity];
    const char* buff = str.c_str();
    for(int i = 0; i < len; ++i){
        string[i] = buff[i];
    }
    string[len] = '\0';
}

String::~String(){
    delete[] string;
    string = nullptr;
    len = capacity = free = 0;
}