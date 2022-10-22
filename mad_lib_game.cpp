#include<iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>

using namespace std;

int choice;
void bycicles();
void lunch_school();
void tarzan();

int main(){
	system("cls");
	bool run=true;
	
	do{
	int Option;
		cout << "----------------- MENU ------------------------" << endl;
		cout << "\n";
		cout << "What story would you like to read?" << endl<<endl;
		cout << "1. Why do be have to ride a bycicle?" << endl;
		cout << "2. Let's have lunch at school" << endl;
		cout << "3. The story of Tarzan" << endl;
		cout << "4. Exit" << endl << endl;
		cout << "Choose an option: ";
		cin>>Option;
		
		switch(Option){
			case 1:
				bycicles();
				break;
			case 2:
				lunch_school();
				break;
			case 3:
				tarzan();
				break;
			case 4:
				run = false;
				break;
			default:
				cout << "Please Choose an option from the above (1-3)" <<endl;
				int main();
		}
	}while(run);
	
	cout << "BYE!";
	return 0;
}


void bycicles(){
	string verb1, adjective1, verb2, partbody1, adverb, partbody2, noun1, verb3, animal, noun2, verb4, adjective2, color; 
	system("cls");
	
	cout<<"\nWrite the word to complete the story!"<<endl;
	cout<<"Verb: "<<endl;
	cin>>verb1;
	cout<<"Adjective: "<<endl;
	cin>>adjective1;
	cout<<"Verb: "<<endl;
	cin>>verb2;
	cout<<"Part of body: "<<endl;
	cin>>partbody1;
	cout<<"Adverb: "<<endl;
	cin>>adverb;
	cout<<"Part of body: "<<endl;
	cin>>partbody2;
	cout<<"Noun: "<<endl;
	cin>>noun1;
	cout<<"Verb: "<<endl;
	cin>>verb3;
	cout<<"Animal: "<<endl;
	cin>>animal;
	cout<<"Noun: "<<endl;
	cin>>noun2;
	cout<<"Verb: "<<endl;
	cin>>verb4;
	cout<<"Adjective: "<<endl;
	cin>>adjective2;
	cout<<"Color: "<<endl;
	cin>>color;
		
	system("cls");
	cout<<"Your mad lib has been created!"<<endl;
	cout<<"\nMost doctors agree that the bicycle of "<<verb1<<" your is a/an "<<adjective1<<" form of exercise. "<<verb2<<" a bicycle enables you to develop your "<<partbody1<<" muscles as well as "<<adverb<<" increase the rate of a "<<partbody2<< " beat. More "<<noun1<<" around the world "<<verb3<<" bicycles than drive "<<animal<<". No matter what kind of "<<noun2<<" you are, always "<<verb4<<" sure to wear a/an "<<adjective2<<" helmet. Make sure to have "<<color<<" reflectors too!"<<endl;
	exit(0);
	
		
}

void lunch_school(){
	string adjective1, food1, adjective2, noun1, food2, name1, noun2, verb1, verb2, verb3, noun3, noun4, name2, food3;
	system("cls");
	
	cout<<"\nWrite the word to complete the story!"<<endl;
	cout<<"Adjective: "<<endl;
	cin>>adjective1;
	cout<<"Food: "<<endl;
	cin>>food1;
	cout<<"Adjective: "<<endl;
	cin>>adjective2;
	cout<<"Noun: "<<endl;
	cin>>noun1;
	cout<<"Food: "<<endl;
	cin>>food2;
	cout<<"Name: "<<endl;
	cin>>name1;
	cout<<"Noun: "<<endl;
	cin>>noun2;
	cout<<"Verb: "<<endl;
	cin>>verb1;
	cout<<"Verb: "<<endl;
	cin>>verb2;
	cout<<"Verb: "<<endl;
	cin>>verb3;
	cout<<"Noun: "<<endl;
	cin>>noun3;
	cout<<"Noun: "<<endl;
	cin>>noun4;
	cout<<"Name: "<<endl;
	cin>>name2;
	cout<<"Food: "<<endl;
	cin>>food3;
		
	system("cls");
	cout<<"Your mad lib has been created!"<<endl;
	cout<<"\nIt was a/an "<<adjective1<<" day at school, and "<<food1<<" was super "<<adjective2<<" for lunch. But when she went outside to eat, a "<<noun1<<" stole her "<<food2<<"! "<<name1<<" chased the "<<noun2<<" all over school. She "<<verb1<<", "<<verb2<<", and "<<verb3<<" through the playground. Then she tripped on her "<<noun3<<" and the "<<noun4<<" escaped! Luckily, "<<name2<<"'s friends were willing to share their "<<food3<<" with her."<<endl;
	exit(0);
}

void tarzan(){
	string adjective1, noun1, adjective2, place, plural_noun, noun2, funny_noise, adjective3, animal_plural;
	system("cls");
	
	cout<<"\nWrite the word to complete the story!"<<endl;
	cout<<"Adjective: "<<endl;
	cin>>adjective1;
	cout<<"Noun: "<<endl;
	cin>>noun1;
	cout<<"Adjective: "<<endl;
	cin>>adjective2;
	cout<<"Place: "<<endl;
	cin>>place;
	cout<<"Plural noun: "<<endl;
	cin>>plural_noun;
	cout<<"Noun: "<<endl;
	cin>>noun2;
	cout<<"Funny noise: "<<endl;
	cin>>funny_noise;
	fflush(stdin);
	cout<<"Adjective: "<<endl;
	cin>>adjective3;
	cout<<"Animal plural: "<<endl;
	cin>>animal_plural;

	system("cls");
	cout<<"Your mad lib has been created!"<<endl;
	cout<<"\nOne of the most important characters in fiction is Tarzan of the "<<adjective1<<". Tarzan was raised by a/an "<<noun1<<" and lives in the "<<adjective2<<" jungle in the heart of darkest "<<place<<". He spends most of his time eating "<<plural_noun<<" and swinging from tree to "<<noun2<<". Whenever he gets angry, he beats on his chest and says, "<<funny_noise<<"! This is his war cry. His best friend is a/an "<<adjective3<<" chimpanzee named Cheetah. He is supposed to be able to speak to elephants and "<<animal_plural<<"."<<endl;
	exit(0);
}