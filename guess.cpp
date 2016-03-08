#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){
	//char answer[1];
	string exit, answer;
	int score, randomNumber, guess;
	score= randomNumber= guess= 0;
	exit= "y";
	
	do{
		srand(time(NULL));
		randomNumber= rand() % 10 + 1;
		cout<<"Random  Value: "<<randomNumber;
		cout<<endl<<endl;
		
		cout<<"Will the next number be lower, equal to or higher than the previous number?"<<endl;
		cout<<"Guess: ";
		cin>>answer;
		cout<<endl<<endl;

		srand(time(NULL));
		guess= rand() % 10 + 1;

		if ( ( (answer == "H") ||(answer == "h") )&& (guess> randomNumber) ){
			score++;
			cout<<"Correct Guess!"<<endl;
			cout<<"Generated Guess: "<<guess<<endl<<endl;
			
			cout<<"Do you want to continue? (y/ n)? ";
			cin>> exit;
			cout<< endl;         
			
			} else if ( ( (answer== "L") || (answer== "l") ) && (guess< randomNumber) ){				
				score++;
				cout<<"Correct Guess!"<<endl;
				cout<<"Generated Guess: "<<guess<<endl<<endl;
				
				cout<<"Do you want to continue? (y/ n)? ";
				cin>> exit;
				cout<< endl;
				
				} else if ( (answer== "E") && (guess== randomNumber) ){					
					score++;
					cout<<"Correct Guess!"<<endl;
					cout<<"Generated Guess: "<<guess<<endl<<endl;
					
					cout<<"Do you want to continue? (y/ n)? ";
					cin>> exit;
					cout<< endl;
					
					} else {
						cout<<"Game Over!"<<endl;
						exit= "n";
						}

		}while(exit== "y" || exit== "Y");//end of while loop
		
	cout<<"Score: "<< score<<endl;

return 0;
}
