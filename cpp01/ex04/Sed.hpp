#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Sed {

    private:
        std::string file_name;
    public:
        Sed(std::string &file_name);
        void file_replace(std::string s1, std::string s2) const;
        void string_replace(std::string& str, const std::string& from, const std::string& to) const;
        ~Sed();

};