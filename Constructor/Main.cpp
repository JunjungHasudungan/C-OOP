#include<iostream>
#include<string>

using namespace std;

class User
{
	public:
		static int index;
		string name, role;
		double age;	

// constructor dengan parameter
	User(string name, string role)
	{
		User::name = name;
		User::role = role;	
		User::index = 1;
	}
	public:
		void dataDiri()
		{
			cout << "No \t : " << User::index++ << endl;
			cout << "Nama \t : " << User::name << endl;
			cout << "Role \t : " << User::role << endl <<endl;
		}
};

int User::index;

int main(int argc, char args[])
{
	User user = User("Hasudungan", "Pengajar");
	User user1 = User( "Febbiana ", "Pelajar");

	cout << "\t  Data Diri " << endl;
	user.dataDiri();
	user1.dataDiri();

	return 0;
}