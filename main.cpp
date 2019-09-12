#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void harley (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is Thread 1 \n";
	}
}

void gusion(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 2 \n";
	}
}
void mino(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 3 \n";
	}
}

void akai(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 4 \n";
	}
}

int main() {
	
	int i = 0;
	thread th1(harley, 4);
	thread th2(gusion, 4);
	thread th3(mino, 4);
	thread th4(akai, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "this print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
