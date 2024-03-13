#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[]={21,87,15,99,-12};
	/* The array index starts with 0, the
	*first element of array has 0 index
	*and represented as arr[0]
	*/
	int i=0;
	while(i<5){
		cout<<arr[i]<<endl;
		i++;
	}
	return 0;
}
