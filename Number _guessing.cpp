#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int guessed_number;
    int random= rand() % 100 + 1;        // a random number will generate between 1 t0 100
    cout<<"Enter any number between 1 to 100 : ";
   
    while (1)
    {
        cin>>guessed_number;
        if (guessed_number>random)
        {
            printf("Wrong! enter smaller number ");
        }
        else if (guessed_number<random)
        {
            printf("Wrong! enter larger number ");
        }
        else
        {
            printf("Congratulation! you have guessed the write number");
            break;
        }
    }
        
        return 0;
}
