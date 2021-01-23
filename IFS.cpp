#include <iostream>
#include <time.h>
using namespace std;

void time_delay(int seconds)
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock_t();
	while(clock() < start_time + milli_seconds);
}

int main()
{
	do 
	{
		int IF1; int IF2; int IF3; 
		string led_rgb_on = "\n(255,255,0)\n";
		string led_rgb_off = "\n(0,0,0)\n";

		cout << "\nIF1: "; cin >> IF1;
		cout << "\nIF2: "; cin >> IF2;
		cout << "\nIF3: "; cin >> IF3;
		if (IF1 == 1 && IF2 == 1 && IF3 == 1)
		{
			cout << led_rgb_on;
			time_delay(1);
		}
		else if (IF1 == 1 && IF2 == 1 && IF3 == 0)
		{
			cout << led_rgb_off;
			time_delay(1);
		} 
	} while (true);
}
