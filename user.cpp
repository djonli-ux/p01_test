<include iostream>
<include string>

class User
{
	private:
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
	User u("vasia", 12);
	u.Print();

	return 0;
}
