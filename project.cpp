#include<iostream>
#include<string>
using namespace std;
// function which promet a message for the user if he want to know description about the project or to let him enter numbers

string  display (int k){
	if(k==1){
		 string s="THIS Project Is TO  Sort ARRAY Of INTeger Numbers \n USING INSERTION SORT ALGORITHM \n Enter numbers to test the algorithm not exceed 100 \n";
		 return s;

	        }
	else{
		  return "ENTER THE NUMBERS YOU WANT TO SORT not exceed 100 \n";
	    }
                        }

int main(){
    int capacity=100;
	int key;
	int i;
	int k;
	int user_input[capacity];
	int In=0;

	cout<<"PRESS  1 If you want a description of the project else press eny number to Enter numbers "<<endl;
	cin>>k;
	cout<<display(k);
	int input;

// let the user enter the number he want to sort not exceed 100
	
	while(cin>>input){
		if(In<capacity){
			user_input[In]=input;
			In++;
		}
		else{
			cout<<" numbers must be not exceed 100 numbers";
		} 
	}
// algorithm of the the insertion sort
	
	for(int j=1;j<In;j++){
		key=user_input[j];
		i=j-1;
		while(i>=0 && key<user_input[i]){
			user_input[i+1]=user_input[i];
			i=i-1;
		}
		user_input[i+1]=key;
	}
	cout<<"THE SORTED ARRAY "<<endl;

// display the sorted array
	cout<<"[";
	for(int i =0; i<In;i++){
		if(i>0){
			cout<<",";
		}
		cout<<user_input[i];
	    }
		cout<<"]";



	
	
	return 0;
}