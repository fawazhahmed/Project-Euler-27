//tests
#include <iostream>
#include <vector>
#include <algorithm>

bool prime(int x)
{
	if (x <= 1)
		return false; //if negative or less than 1

		for (int i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				return false; //if there is no remainder
			}

		}
	
	return true; //all other cases
}

std::vector<int> primes(std::vector<int> r, int w, int x, int y, int z)
{

	int d;
	std::vector<int> primed; //new vector definition

	for (int i = 0; i < w; i++)
	{
		d = x * (i * i) + (y * i) + z; //declaration of the polynomial and set it equal to one number
		if (prime(d) == true) 
			primed.push_back(d); //if prime number, add it to a vector
	}
	return primed; //return the vector

}

void print(std::vector<int> primed, int s, int t, int u, int v)
{

	primed = primes(primed, s, t, u, v); //new vector equal to the return from previous function
	 
	for (int i = 0; i < s; i++)
	{ 
		std::cout << primed[i]; //display that number
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void q4()
{
	std::vector<int> q;
	

	for (int j = -999; j <= 999; j++) //test case ranges
	{
		for (int k = -1000; k <= 1000; k++)
		{
			int sum = 0; int p = 0;
			while (prime(abs((p * p) + (p * j) + k)) == true) //get the absolute value since negatives are not prime
			{
				sum++;
				p++; //add up the counter 
			}
			q.push_back(sum); 
			
		}

	}
	int m = *max_element(q.begin(), q.end()); //find biggest number for n value


	for (int j = -999; j <= 999; j++) //do it again with the n for a and b
	{
		for (int k = -1000; k <= 1000; k++)
		{
			int sum = 0; int p = 0;
			while (prime(abs((p * p) + (p * j) + k)) == true) 
			{
				sum++;
				p++;
			}
			if (sum == m)
			{
				std::cout << "a: " << j << std::endl;
				std::cout << "b: " << k << std::endl; //same thing again to get these values but with the new if statement

			}
		}
	}
	std::cout << "n: " << m << std::endl;
}


int main()
{

	int a = 1; int b = 1; int c = 41;
	int n = 40; int n1 = 80;
	int e = 1; int f = -79; int g = 1601;
	std::vector<int> p;
	std::vector<int> q; //initialize all of these variables/vector
	std::cout << " 40 prime numbers of n^2+n+41 are: " << std::endl;
	print(p, n, a, b, c);

	std::cout << " 80 prime numbers of n^2-79n+1601 are: " << std::endl;
	print(q, n1, e, f, g);
	
	q4();
			// print out the information to the user
	return 0;

}