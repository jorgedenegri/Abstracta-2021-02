#include <iostream>

using namespace std;
int euclides_ext(int a, int b) {
	int r1 = a, r2 = b;
	int s1 = 1, s2 = 0;
	int t1 = 0, t2 = 1;
	int s;
	int t;
	while (r2 > 0)
	{
		int q = r1 / r2;
		int r = r1 - (q * r2);
		r1 = r2; 
        r2 = r; 

		s = s1 - (q * s2);

		s1 = s2;
        s2 = s;

		t = t1 - (q * t2);
		t1 = t2; t2 = t;
	};
    cout<<s1<<endl;
    cout<<t1<<endl;
	s = s1;
	
	return s;
}

int main(){
  euclides_ext(1914,899);
  return 0;
}
