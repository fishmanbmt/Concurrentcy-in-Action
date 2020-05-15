#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello concurrent world.\n";
}

int main()
{
	std::thread t(hello);
	std::cout << "Hello main.\n";
	t.join();
}
