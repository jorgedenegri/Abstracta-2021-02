#include <iostream>

using namespace std;
int euclides(int a, int b)
{
    int res=a%b;
    while(res!=0)
    {
        a=b;
        b=res;
        res=a%b;
    }
    return b;
}
void euclides_ext(int a, int b) {
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
	}
  if (euclides(a,b)!=1){
    cout<<"no existe la inversa multiplicativa entre estos números"<<endl;
  }
  else{
    cout<<"la inversa multiplicativa de "<<a<<" modulo "<<b<<" es: "<< s1 ;
  }   
}

int main(){
  euclides_ext(11,7);
  return 0;
}
