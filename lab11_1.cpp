#include<iostream>
using namespace std;

int main(){
    int i=1;
    char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << i<<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade>='A'&&grade<='F'){
	        if(grade == 'A'){ // if grade is A
			count[0] +=1;
		}else if(grade == 'B'){ // if grade is B
			count[1]+=1;
		//and so on ... for grade = C, D, F	
		}
		else if(grade =='C'){
		    count[2]+=1;
		}
		else if(grade =='D'){
		   count[3]+=1;
		}else if(grade =='F'){ // grade is wrong input
			count[4]+=1;//Do something
		} 
		i++;
		
	    }
	    else{
	        if(grade=='0'){
	            break;
	        }   
	        cout << "Wrong input. Please input again.";
	    }
	}while(true);
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
