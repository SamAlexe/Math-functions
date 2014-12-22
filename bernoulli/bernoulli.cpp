

float Bernoulli(float n)
{
	for(int i = 0;i < 1000; i++)
	{
		float num = pow(n, i-1);
		float dom = factorial(i+1);
		
		cout << "Bernoulli number of: " << i << " is: " << pow(-1,  i) * num/dom << endl;
	}
}
