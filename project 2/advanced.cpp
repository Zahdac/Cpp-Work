#include <iostream>
#include <vector>
#include <utility>
// Function to sort numbers from lowest to highest. Uses bubble sort
void bubble_ascending(std::vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
    for (int element : v)
    {
        std::cout << element << " ";
    }
}
// Function to sort numbers from highest to lowest. Uses bubble sort
void bubble_descending(std::vector<int> &m)
{
    int n = m.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (m[j] < m[j + 1])
            {
                std::swap(m[j], m[j + 1]);
            }
        }
    }
    for (int element : m)
    {
        std::cout << element << " ";
    }
}

int main()
{

    char choice;
    // Takes in 5 numbers from the user
    std::cout << "Enter 5 numbers: ";
    const int size = 5;
    // Used a vector to store in the inputted numbers
    std::vector<int> input(size);
    // For loop to make sire the user inputs 5 numbers
    for (int i = 0; i < size; i++)
    {
        std::cin >> input[i];
    }
    // Shows the numbers the user inputted side before sorting
    std::cout << "You entered: " << '\n';
    for (int i = 0; i < size; i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << '\n';
    // Made a v variable to take in the size of the input vector
    int v = input.size();
    // Asks the user how they would like to sort the numbers
    std::cout << "Would you to sort them by ascending or descending order?(A/D): ";
    std::cin >> choice;
    choice = toupper(choice);
    // Switch case to determine what to do after taking the user's choice
    switch (choice)
    {
    case 'A':
        bubble_ascending(input);
        break;
    case 'D':
        bubble_descending(input);
        break;
    }
    return 0;
}