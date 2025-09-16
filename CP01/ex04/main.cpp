
#include <fstream>
#include <iostream>
#include <string>

int main (int argc, char** argv)
{
	if (argc == 4)
	{
		std::ifstream myfile(argv[1]);
		if (myfile.is_open())
		{
			// i need to redo the naming of the newfile
			std::ofstream newfile (".newname");
				if (newfile.is_open())
				{
					for (std::string line; std::getline(myfile, line, argv[2][0]);)
					{
						if (line.compare(argv[2]) == 0)
							newfile << argv[3];
						else
							newfile << line;
						
					}
					//create new with the name <filename>.replace and copy all the text
					// with copy all the characters from file1 to file2 and then
					// compare all the strings there for s1 and if true then change it to s2
					newfile.close();
				}
				else 
					std::cout << "Unable to create or open new file." << std::endl;
			myfile.close();
		}
		else
			std::cout << "Unable to open file or no such file as " << argv[1] << " found." << std::endl;
	}
	else
		std::cout << "Input: <filename> <string> <string>" << std::endl;
	return (0);
}