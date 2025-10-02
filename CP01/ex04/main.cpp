
#include <fstream>
#include <iostream>

int main (int argc, char** argv)
{
	if (argc == 4)
	{
		std::ifstream myfile(argv[1]);
		std::string fileName = argv[1];
		if (myfile.is_open())
		{
			std::ofstream newfile (fileName + ".replace");
			if (newfile.is_open())
			{
				std::string	buffer;
				std::string search = argv[2];
				std::string replace = argv[3];
				std::string::size_type len1 = search.length();
				std::string::size_type pos;
				while (std::getline(myfile, buffer))
				{
					pos = buffer.find(search);
					while (len1 != 0 && pos != buffer.npos)
					{
						buffer.erase(pos, len1);
						buffer.insert(pos, replace);
						pos = buffer.find(search, pos + replace.length());
					}
					newfile << buffer << std::endl;
				}
				newfile.close();
			}
			else
			{
				std::cout << "Unable to create or open new file." << std::endl;
				return (1);
			}
			myfile.close();
		}
		else
		{
			std::cout << "Unable to open file or no such file as " << argv[1] << " found." << std::endl;
			return (1);
		}
	}
	else
	{
		std::cout << "Input: <filename> <string> <string>" << std::endl;
		return (1);
	}
	return (0);
}