#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z) {
	*w = 50;
	*x = 100;
	*y = 500; 
	*z = 1000;
	int h[] = {*w,*x,*y,*z};
	int p;
	
	for (;;) {
		p = rand()%4;
		*w = h[p];
		if (*w!=0) {
			*w=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		*x = h[p];
		if (*x!=0) {
			*x=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		*y = h[p];
		if (*y!=0) {
			*y=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
	
	for (;;) {
		p = rand()%4;
		*z = h[p];
		if (*z!=0) {
			*z=h[p];
	  		h[p] = 0;
			break;		
		}	
	}
}