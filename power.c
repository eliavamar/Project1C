#define e 2.718281828
double Power(double x,int y){
	int c=1;
	double temp=x;
	if(y>0){
		while(c<y){
			c++;
			x=x*temp;
		}
		return x;

	}
	if(y<0){
		c=1;
		while(c!=y){
			c--;
			x=x/temp;

		}
		return x;
	}
	return 1;
}
double Exponent(int x){
return Power(e,x);

}

                                            
