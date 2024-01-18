#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream File("pranav.txt");
	File << "Hi I am pranav with my friend Tanmay.";
	File.close();
}
