#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;


int main(){

	vector<int> ss;
	vector<int>::iterator it;
	int choice, item;

	while(1){

		cout<<"\n---------------------"<<endl;
		cout<<"Vector Implementation in STL"<<endl;
		cout<<"\n---------------------"<<endl;
		cout<<"1. Insert Element into the Vector"<<endl;
		cout<<"2. Delete Last Element from the Vector"<<endl;
		cout<<"3. Size of the Vector"<<endl;
		cout<<"4. Display by Index"<<endl;
		cout<<"5. Display by Iterator"<<endl;
		cout<<"6. Clear the Vector"<<endl;
		cout<<"7. Exit"<<endl;
		
		cout<<"Enter your Choice: "<<endl;
		cin>>choice;

		switch(choice)
		{

			case 1:
				cout<<"Enter a value to be inserted: ";
				cin>>item;
				ss.push_back(item);
				break;

			case 2:
				cout<<"Delete the last inserted element"<<endl;
				ss.pop_back();
				break;

			case 3:
				cout<<"Size of the Vector: ";
				cout<<ss.size()<<endl;
				break;


			case 4:
				cout<<"Displaying Vector by Index: ";
				for(int i=0; i<ss.size(); ++i)
					cout<<ss[i]<<" ";
				cout<<endl;
				break;

			case 5:
				cout<<"Displaying Vector by Iterator: ";
				for(it = ss.begin(); it <ss.end(); ++it)
					cout<<*it<<" ";
				cout<<endl;
				break;

			case 6:
				ss.clear();
				cout<<"Vector Cleared"<<endl;
				break;

			case 7:
				exit(1);
				break;

			default:
				cout<<"Incorrect Choice"<<endl;
		}


	}

	return 0;

}