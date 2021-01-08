#include<iostream>
#include <dos.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the minutes:-  ";
	cin>>n;
	
	for(i = n;i > 0; i--){
		for(j = 60;j > 0;j--){
			std::this_thread::sleep_for(std::chrono::milliseconds(2000))
			if(j==60){
				cout<<i<<"mins  remaining"<<endl;
			}
			else if(i==1){
				cout<<j<<"secs ramaining"<<endl;
			}
			else{
				cout<<i-1<<"mins  "<<j<<"secs ramaining"<<endl;
			}
			j=j-1;
		}
	}
	return 0;
}




















