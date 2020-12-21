#include <iostream>
#define L 10
#define R 1000000000

using namespace std;



void BoringNumber(int, int);
int Reverse(int);
int invert(int);

int flag = 0;

int main(){

	int BR_Count = 0;
	int num;
	for(num=L; num<=R; ++num){
		BoringNumber(Reverse(num),1);
		if(flag == -10)
			cout<<"Not a BoringNumber"<<"\n";
		else{
			BR_Count++;
			cout<<"It is a BoringNumber"<<"\n";
		}

		flag = 0;
	}

	cout<<"BR Count: "<<BR_Count<<"\n";

	return 0;
}


void BoringNumber(int num, int digit){

	int rev = num;
	int value = rev%10;
	if(digit == 1) // digit is odd
		if(!(value%2)) //value is even
			flag = -10;
	else if(digit == 0) // digit is even
		if(value%2) //value is odd
			flag == -10;

	cout<<"num : flag " <<num<<":"<<flag<<"\n";
	if(num/10>0)	
		BoringNumber(num/10, invert(digit));

	return;
}

int Reverse(int num){

	int rev=0;
	while(num){
		rev = (10*rev) + (num%10);
		num /= 10;
	}
	return rev;
}

int invert(int digit){
	
	if(digit == 0)
		return 1;
	else if(digit == 1)
		return 0;
}
