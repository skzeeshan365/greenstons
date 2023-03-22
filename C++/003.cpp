#include <iostream>

int main() {
    int n;

    std::cout<<"Enter limit: ";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter data: ";
    for (int &element : arr)
    {
        std::cin>>element;
    }
    
    std::cout<<"Print data: ";
    for (int &element : arr)
    {
        std::cout<<element<<std::endl;
    }
}