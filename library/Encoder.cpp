#include <iostream>

class Encoder 
{
	private:
	std::string path;	
	int bit;

	public Encoder(string path, int bit)
	{
		this.bit = bit;
		this.path = path;
	}

};