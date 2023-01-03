#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main (){
	ifstream source("score.txt");
	ofstream dest;
    double sum=0,avg;
    double i=0;
    double stdi=0 ,sqsum= 0;
	
	string textline;
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        
        i++;
        
        sqsum += pow(atof(textline.c_str()),2);
    }
    avg=sum/i;
    stdi=sqrt((sqsum/i)-(avg*avg));
    cout <<  setprecision(3);
    cout<<"Number of data = "<<i<<endl;
    cout<<"Mean = "<<avg<<endl;
    cout<<"Standard deviation = "<<stdi;


	return 0;
}
