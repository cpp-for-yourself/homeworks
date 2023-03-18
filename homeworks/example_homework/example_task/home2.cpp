#include <iostream>
#include <vector>
#include <random>
using namespace std;
int main()
{ 
    cout << "\n Welcome to the GUESSING GAME ! \n I will generate a number and  you will guess it! \n Please provide the smallest number: ";
    
    int small=0;
    cin >>small;
    cout << "\n Please provide the largest number: ";
    int large=0;
    cin >> large;
    cout << "\n I've generated a number \n Please provide the next guess:";
    
    
   
 std::random_device random_device; 
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution distribution{small,large};
  int random_num=distribution(random_engine);
 //  cout << "\n Random number is:"<< random_num; 
   

    int guess=0;
    int counter=1;
   
    while(true)
    {  cin >> guess;
      if(guess> random_num)
      {
        cout << "\n Your number is too large. Try again!";
        ++counter;
       
      }
       else if(guess < random_num)
      {
        cout << "\n Your number is too small. Try again!";
        ++counter;
        
      }
      else 
      break;


    }
    
    cout << "\n You've done it! You guessed the number " << random_num<< " in "<<counter<<" guesses!";



return 0;

}