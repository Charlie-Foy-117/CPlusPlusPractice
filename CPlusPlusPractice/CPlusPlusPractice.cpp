// CPlusPlusPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void BasicFunction()
{
    std::cout << "Basic function ran" << std::endl;
}

int main()
{
    /*
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
    /*
    bool decision = true;
    if (decision)
    {
        std::cout << "Decision was true" << std::endl;
    }
    else
    {
        std::cout << "Decision was false" << std::endl;
    } */

    //advanced if statements :Ternary
    //written inline with other code, such as an assignment
    //it results in one of two values based on conditions

    //int ternResult = decision ? 1 : 2; 
    /*
    int errorCode = 2;

    switch (errorCode)
    {
    case 0:
    {
        std::cout << "error was 0!" << std::endl;
        break;
    }
    case 1:
    {
        std::cout << "error was 1!" << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "error was 2!" << std::endl;
        break;
    }

    default:
    {
        std::cout << "error was unrecongized!" << std::endl;
        break;
    }
    } */

    /*
    int playerPath = 0;

    std::cout << "Please enter a number that correlates to the path you wish to take" << std::endl
        << "1. Continue up the rumbling moutain" << std::endl
        << "2. Move towards the whispering woods" << std::endl
        << "3. Head across the acient stone bridge" << std::endl
        << "4. Decide you are tired and go back from where you came from " << std::endl;

    std::cin >> playerPath;
    switch (playerPath)
    {
    case 1:
    {
        std::cout << "You have chosen path 1" << std::endl
            << "You followed a path down towards an unstable volcano and met your end" << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "You have chosen path 2" << std::endl
            << "You stumbled into a dark forest where a passing merchant sells you a berry which when consumed transports you to valhalla" << std::endl;
        break;
    }
    case 3:
    {
        std::cout << "You have chosen path 3" << std::endl
            << "You attempt to cross the bridge but as you are doing so an old grey haired old man shouts at you and destorys the bridge and you fall to your death" << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "You have chosen path 4" << std::endl
            << "You head home and you never have another adventure" << std::endl;
        break;
    }
    default:
    {
        std::cout << "You did not enter a correct choice" << std::endl
            << "You sit down where you are and think about the bad choices you made" << std::endl
            << "You also get mugged but passing thieves" << std::endl;
        break;
    }
    }
    */

    /*
    bool whileBool = true;

    while (whileBool == true)
    {
        //do the body of the loop
        whileBool = false;
        //at the end if the condtion is still true run loop again
    }

    int doI = 0;
    do
    {
        ++doI;
        std::cout << "Do while ran " << doI << std::endl;
        whileBool = false;
    } while (doI < 2);

    for ( int i = 0; i < 5; ++i)
    {
        std::cout << "for loop ran " << i << " times" << std::endl;
    }
    */

    /*
    std::string google = "G";
    for (int i = 0; i < 10; ++i)
    {
        google += "o";
    }
    google += "gle";
    std::cout << google << std::endl;
    */
    

    BasicFunction();
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
