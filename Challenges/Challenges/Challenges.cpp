/*
********** PART 1***********************************************************

Swap Array elements
Create an array that can hold n number of integers
You can choose the size n on your own
Get array elements from the user
Display all array elements

Now the user should be shown 2 options,
[S]wap-elements	[L]eave

if the user leaves, the program exits, if the user wants to "repeatedly" swap different elements,
they should be asked to enter 2 positions where the elements need to be swapped.
swap elements
Display the updated array

Sample output : For example, if you choose size n = 5, you want to swap elements at position 2 and 4

Enter 5 integers to fill the array:
2
3
9
8
1
What would you like to do next : [S]wap-elements	[L]eave
s
Enter what elements you want to swap:
Enter First Index : 2
Enter Second Index : 4
New array is :
2
8 // was 4th element before swap
9
3 // was 2nd element before swap
1
What would you like to do next : [S]wap-elements	[L]eave
l
*****Program exits***********
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{   
    //std::array<int, 6> arr2;

    //char userChoice = 's';
    //
    //
    //int arr1[5] = { 2,3,9,8,1 };//0,1,2,3,4

    //do
    //{
    //    std::cout << "Array before swapping elements : " << std::endl;
    //    for (size_t i = 0; i < 5; i++)
    //    {
    //        std::cout << arr1[i] << ", ";
    //    }

    //    std::cout << "\nWhat would you like to do next : \n[S]wap-elements	[L]eave" 
    //        << std::endl;
    //    std::cin >> userChoice;

    //    if (userChoice == 's')
    //    {
    //        int index1 = -1, index2 = -1;
    //        std::cout << "Enter what elements you want to swap : " << std::endl;
    //        while (index1 < 0 || index1 > 4)
    //        {
    //            std::cout << "Enter First Index : ";
    //            std::cin >> index1;
    //        }

    //        while (index2 < 0 || index2 > 4)
    //        {
    //            std::cout << "Enter Second Index : ";
    //            std::cin >> index2;
    //        }

    //        int temp = arr1[index1];
    //        arr1[index1] = arr1[index2];
    //        arr1[index2] = temp;
    //        
    //        std::cout << "Array after swapping elements : " << std::endl;
    //        for (size_t i = 0; i < 5; i++)
    //        {
    //            std::cout << arr1[i] << ", ";
    //        }
    //    }

    //} while (userChoice != 'l');

    //return 0;
    
    
}
