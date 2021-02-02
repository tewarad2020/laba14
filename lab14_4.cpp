#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d) {
	a = 50;
	b = 100;
	c = 500; 
	d = 1000;
	int h[] = {a,b,c,d};
	int p;
	
	for (;;) {
		p = rand()%4;
		a = h[p];
		if (a!=0) {
			a=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		b = h[p];
		if (b!=0) {
			b=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		c = h[p];
		if (c!=0) {
			c=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		d = h[p];
		if (d!=0) {
			d=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
}