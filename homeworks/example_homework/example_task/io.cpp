#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array>
int main()
{
    //hw
    //ghjkl
std::string name = "";
std::string time = "";
std::string adj1="";
std::string adj2="";
int len=name.length();
    std::cout << "Welcome to the fortune teller program!";
    std::cout << "\n Please enter your name: ";
    std::cin >> name;
    std::cout << "\n Please enter the time of year when you were born: ";
    std::cout << "\n (pick from 'spring', 'summer', 'autumn', 'winter') ";
    std::cin >> time;
    std::cout << "\n %s" << time;
    std::cout << "\n Please enter an adjective ";
    
    std::cin >> adj1;
    
    std::cout << "\n Please enter another adjective ";
    std::cin >> adj2;
    
    std::vector<std::string> g1 ;
    
     g1 ={adj1,adj2};
std::string temp1=g1[len%2];
std::map<std::string, std::string> myMap;
myMap.insert({"spring","STL guru"});
myMap.insert({"summer","C++ expert"});
myMap.insert({"autumn","coding beast"});
myMap.insert({"winter","software design hero"});
const std::array Array_Of_Ending={"eats UB for breakfast","finds errors quicker than the compiler","is not afraid of C++ error message"};
std::string temp2=Array_Of_Ending[len%3];
std::string Noun=myMap.at(time);
std::cout << "\n " << name << "," << " the " << temp1 << " " << Noun <<  " that " << temp2;

}

