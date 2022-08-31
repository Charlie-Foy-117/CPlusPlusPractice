// CPlusPlusPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //examples of different variables
    int testInt = 0;
    unsigned testUnsigned = 100u;
    float testFloat = 0.5f;
    double testDouble = 0.5;
    bool testBool = true;
    char testChar = 'C';

    char firstNameOld[] = "Charlie";

    float result = 70.0f / 100;

    std::string firstName = "Charlie";
    std::string lastName = "Foy";

    //can add strings together with +
    std::string fullName = firstName + " " + lastName;

    //can access characters in string as if string was array
    char firstInitial = fullName[0];

    //Substr splits the string based on an initial position and a length
    std::string initials = fullName.substr(0 , 1);

    //you can find the position in the string and store it in variable of type std::size_t similar to int
    std::size_t spacePos = fullName.find(" ");

    //we can use the postion to get the next substr
    initials += fullName.substr(spacePos + 1, 1);





    //problem question
    std::string paragraph = "Whether we wanted it or not, we've stepped into a war with the Cabal on Mars.";
    std::string twentyChars = paragraph.substr(0, 20);
    std::string restOfChars = twentyChars + "\n";
    restOfChars += paragraph.substr(20, std::string::npos);

    //example of output to console
    //std::cout << restOfChars << std::endl;



    //input
    /*std::cout << "Please enter a word" << std::endl;
    std::string entryString;

    //std::cin >> is used to gather input. the result of the console input is stored in the variable to the right
    std::cin >> entryString;

    std::cout << "You typed " << entryString << "!" << std::endl;

    //we can also input two things that arent strings
    int entryInt;
    std::cout << "Please enter a whole number" << std::endl;
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << std::endl;

    //NOTE: if they enter something other than an int
    //the input will not "consume" the entry
    //this means it will be used again the next time
    //that cin is used breaking your program
    //we should use data validation

    float entryFloat;
    std::cout << "Please enter a decimal number" << std::endl;
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << std::endl;

    std::string lineOfText;
    std::cout << "Please enter a sentence" << std::endl;
    std::getline(std::cin, lineOfText);
    std::cout << "You typed " << lineOfText << std::endl;*/


    //selection
    bool decision = true;
    if (decision)
    {
        std::cout << "Decision was true" << std::endl;
    }
    else
    {
        std::cout << "Decision was false" << std::endl;
    }

    //advanced if statements :Ternary
    //written inline with other code, such as an assignment
    //it results in one of two values based on conditions

    int ternResult = decision ? 1 : 2;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
