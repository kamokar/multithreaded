#include <iostream>       // std::cout
#include <thread>         // std::thread
using namespace std;

void jeden()
{
	while (1)
		cout << "jeden" << endl;
}

void dwa()
{
	while (1)
		cout << "dwa" << endl;
}

int main()
{
	thread first(jeden);
	thread second(dwa);

















	getchar();
	return 0;
}