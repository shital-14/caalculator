#include<iostream>

using namespace std;

int main()
{
	int answer = 5;
	int guess; 
	int health = 0;
	int chances = 2;
	bool gameover = false;
    
	while(answer !=guess && !gameover){
	 if(health<chances){
	 cout<<"ENTER YOUR NUMBER";
		cin>>guess;
		health++;
	}else{
	gameover = true;	
	}	
}
	if(gameover){
	  cout<<"YOU LOST"<<endl;	
	}else{
	cout<<"YOU WIN"<<endl;
	}
      
	  
	  return 0;
}
