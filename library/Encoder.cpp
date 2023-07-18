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

	public PrintInfo()
	{

		std::cout << "Bit amount: " << bit << "\n Path: " << path << endl; 
	}

};