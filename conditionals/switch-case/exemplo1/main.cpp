#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day=4;
	switch(day){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
			
	}
	//outputs "Thursday" (day 4)
	return 0;
}
