#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int secretNumber=rand() % 15+1;
	int i,usernumber;
	cout<<"Let's start the game. You have 7 chances."<<endl;
	for(i=1;i<=7;i++)
	{
		
		cout<<"Guess the number: ";
		cin>>usernumber;
		if(usernumber==secretNumber)
		{
			cout<<"Congratulations! You guessed the number. (Hoo hoo)"<<endl;
			cout<<"and The Number is = "<<secretNumber<<".";
			exit(0);
		}
		else
		cout<<"Try again! ";
		cout<<"Your remaining chances are "<<7-i<<"."<<endl;
	}

	cout<<"You have reached your limit! you lost the game"<<endl;
	cout<<"The Number was ="<<secretNumber;
	return 0;
}
