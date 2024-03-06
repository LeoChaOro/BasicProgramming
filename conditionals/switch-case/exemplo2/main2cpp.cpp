#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day=4;
	switch (day){
		case 6:
			cout<<"Today is saturday";
			break;
		case 7:
			cout<<"Today is sunday";
			break;
		default:
			cout<<"Looking forward to the weekend";
	}
	//outputs"looking forward to the weekend"
	return 0;
}
