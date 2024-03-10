#include <iostream>

std::string toLowercase(std::string str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (std::isalpha(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}
int check_inp(std::string Name)
{
    std::string arr[3] = {"presidential pardon", "robotomy request", "shrubbery creation" };
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == toLowercase(Name))
            return(i);
    }
    return(-1);
    
}
int main()
{
    std::string Name = "shrubbery Creation";

    int index =  check_inp(Name);
    switch (index)
    {
        case  0:
            std::cout << "0/n";
            break;
        case 1:
            std::cout << "1/n";
            break;
        case 2:
            std::cout << "2/n";
            break;
    default:
        std::cout << "Name incorrect";
        break;
    }
}