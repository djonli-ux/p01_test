#include <iostream>
#include <string>

class User
{
	private:
		static int max_id = 0;
		std::string name;
		int age;

	public User(std::string name, int age)
	{
		this.name = name;
		this.age = age;
	}

	public void Print()
	{
		std::cout << name << "/t" << age << endl;
	}
};

int main()
{
	User u("vasia123", 12);
	u.Print();

	return 0;
}
