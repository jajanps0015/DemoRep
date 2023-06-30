#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Challenges.h"

class Character2
{
public:
    char ancestory[20];
    char charClass[20];

    void Display()
    {
        std::cout << "Character data : Ancestory = " << ancestory
            << " and class = " << charClass << std::endl;
    }
};

class Character
{
public:
    const char* ancestory;
    const char* charClass;

    Character()
        : ancestory("xxx"),
        charClass("xxx")
    {}

    Character(const char* anc, const char* cls)
        : ancestory(anc), charClass(cls)
    {}

    void Display()
    {
        std::cout << "Character data : Ancestory = " << ancestory
            << " and class = " << charClass << std::endl;
    }
};

void IOCharater();;
void IOCharater2();

int main()
{
    //IOCharater();
    IOCharater2();
}

void IOCharater()
{
    // just writing to file, no reading
    std::ofstream outputFile("binaryFile.dat", std::ios::binary);
    if (!outputFile)
    {
        std::cout << "Error opening file for write : ";
        return;
    }
    char enterMore = 'y';
    do
    {
        std::string anc, cls;

        std::cout << "Enter ancestory : ";
        std::cin >> anc;

        std::cout << "Enter class : ";
        std::cin >> cls;

        Character coutChar(anc.c_str(), cls.c_str());

        outputFile.write(coutChar.ancestory, strlen(coutChar.ancestory) + 1);
        outputFile.write(coutChar.charClass, strlen(coutChar.charClass) + 1);


        std::cout << "Enter more : ";
        std::cin >> enterMore;

    } while (enterMore == 'y');

    outputFile.close();

    std::ifstream inputFile("binaryFile.dat", std::ios::binary | std::ios::in);
    if (!inputFile)
    {
        std::cout << "Error opening file for read : ";
        return;
    }
    /*inputFile.read(reinterpret_cast<char*>(&cinChar), sizeof(Character));
    cinChar.Display();*/
    while (!inputFile.eof())
    {
        std::string readAnc;
        std::getline(inputFile, readAnc, '\0');
        const char* anc = readAnc.c_str();

        std::string readClass;
        std::getline(inputFile, readClass, '\0');
        const char* cls = readClass.c_str();

        Character cinChar(anc, cls);
        cinChar.Display();
    }

    inputFile.close();
    return;
}

void IOCharater2()
{
    // just writing to file, no reading
    std::ofstream outputFile("binaryFile2.dat", std::ios::binary);
    if (!outputFile)
    {
        std::cout << "Error opening file for write : ";
        return;
    }
    char enterMore = 'y';
    do
    {

        Character2 coutChar;

        std::cout << "Enter ancestory : ";
        std::cin >> coutChar.ancestory;

        std::cout << "Enter class : ";
        std::cin >> coutChar.charClass;


        outputFile.write(reinterpret_cast<char*>(&coutChar), sizeof(coutChar));


        std::cout << "Enter more : ";
        std::cin >> enterMore;

    } while (enterMore == 'y');

    outputFile.close();

    std::ifstream inputFile("binaryFile2.dat", std::ios::binary | std::ios::in);
    inputFile.seekg(0);
    if (!inputFile)
    {
        std::cout << "Error opening file for read : ";
        return;
    }

    Character2 cinChar;

    inputFile.read(reinterpret_cast<char*>(&cinChar), sizeof(cinChar));
    while (!inputFile.eof()) //quit on EOF
    {
        cinChar.Display();
        inputFile.read(reinterpret_cast<char*>(&cinChar), sizeof(cinChar));
    }

    inputFile.close();
    return;
}

void iodemo()
{
    //char ch = 'x';
    //int j = 77;
    //double d = 6.02;
    //string str1 = "Kafka"; //strings without
    //string str2 = "Proust"; // embedded spaces
    //ofstream outfile("fdata.txt"); //create ofstream object

    //outfile << ch //insert (write) data
    //    << j
    //    << " " //needs space between numbers
    //    << d
    //    << str1
    //    << " " //needs spaces between strings
    //    << str2;
    //cout << "File written\n";
    //return 0;
}