#include <iostream>

#ifdef _WIN32

#include <windows.h>

#endif

int main()
{
    #ifdef _WIN32
	
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    #endif

    std::cout << "Привет Мир!\n";
    std::cin.get();

    return 0;
}
