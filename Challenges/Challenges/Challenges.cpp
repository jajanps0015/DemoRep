#include <fstream>
#include <iostream>
#include <string>
#include <vector>


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

int main()
{
    // just writing to file, no reading
    std::ofstream outputFile("binaryFile.dat", std::ios::binary);
    if (!outputFile)
    {
        std::cout << "Error opening file for write : ";
        return 0;
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
        return 0;
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