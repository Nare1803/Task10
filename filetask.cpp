#include <iostream>
#include <fstream>
#include<string>

void writing_in_file(const std::string& file_name, const std::string& str) {
    std::fstream myfile;

    myfile.open(file_name, std::ios::out);//write
    if (myfile.is_open()) {
        myfile << str << std::endl;
        myfile.close();
    }
}

void reading_from_file(const std::string& file_name) {
    std::fstream myfile;
    myfile.open(file_name, std::ios::in);//read
    if (myfile.is_open()) {
        std::string line;
        while (getline(myfile, line)) {//every single line of text
            //it reads from this file
            std::cout << line << std::endl;
        }
        myfile.close();
    }
}
int main()
{
    std::string file_name = "newmyfile.txt";
    std::string str = " Xachik:\n Vachik:\n Hrachik:\n Qajik:";
    writing_in_file(file_name, str);
    std::cout << "original file :" << std::endl;
    reading_from_file(file_name);

}

