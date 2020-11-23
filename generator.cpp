#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

#define FILE_PATH "/home/debian"

int main()
{
	string file_name = "generated.html";
	fstream fs;

	cout << "Creating HTML File" << endl;

	fs.open((file_name).c_str(), std::fstream::out);
	fs << "<html><title>My Web Page</title>" << endl;
	fs << "<body><h1>CPE 422 Web Page</h1>" << endl;
	fs << "My first HTML web page." << endl;
	fs << "<h2>Testing BeagleBone using CGI scripts</h2>" << endl;
	fs << "<ol>" << endl;
	fs << "<li>Linux</li>" << endl;
	fs << "<li>Web Serves</li>" << endl;
	fs << "</ol>" << endl;
	fs << "</body></html>" << endl;
	fs.close();

	cout << "Program Complete" << endl;
	return 0;
}
