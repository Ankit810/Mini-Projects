#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{ int n,ele,ch;
  srand ( time(NULL) ); //initialize the random seed
  int array[100];
  cout<<"_____WELCOME TO THE GAME OF GUESSING_____"<<endl<<"THE INSTRUCTIONS OF THE GAME ARE AS FOLLOWS:"<<endl;
  cout<<"1. The Computer will first ask from you the list of numbers from which the random number has to be selected."<<endl;
  cout<<"2. The Computer will randomly select a number from the set of numbers you've input."<<endl;
  cout<<"3. You have to guess the number which The Computer has chosen."<<endl;
  cout<<"IF YOU CHOOSE THE CORRECT OPTION, YOU WIN THE GAME...."<<endl;
  cout<<"\n\n__________LET'S BEGIN__________\n\n";
  cout<<"ENTER THE NUMBER OF ELEMENTS:- ";
  cin>>n;
  cout<<"ENTER THE ELEMENTS:- \n";
  for(int i=0;i<n;i++)
  cin>>array[i];

  cout<<"THE ELEMENTS ENTERED ARE:- \n";
  for(int i=0;i<n;i++)
  cout<<array[i]<<"\t";
  do{

  int RandIndex = rand() % n; //generates a random number between 0 and 3
  cout<<"\nGUESS A NUMBER FROM THE ARRAY WHICH THE COMPUTER HAS CHOSEN....\n";
  cin>>ele;
  if(array[RandIndex]==ele)
  cout<<"Voila! You've won the game!\n";
  else
  cout<<"Sorry :( It's the wrong choice.... The computer had chosen "<<array[RandIndex];

  cout<<"\n\nDO YOU WANT TO TRY AGAIN? \nPRESS '1' FOR YES AND '2' FOR NO :- ";
  cin>>ch;

}while(ch==1);

return 0;
}
