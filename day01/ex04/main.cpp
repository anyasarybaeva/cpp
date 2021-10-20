#include<iostream>
#include <fstream>
#include <string>
int error_argv(int argc)
{
	if(argc!=4)
	{	
		std:: cout<<"not enougth argv"<<std::endl;
		return(1);
	}
	return(0);
}
std::string ft_replace(std::string line, char **argv)
{
	unsigned long i;
	std::string find;	
	
	find = argv[2];
	i = line.find(argv[2]);
	while(i<line.length())
	{
		line.erase(i,find.length());
		line.insert(i,argv[3]);
		i = line.find(argv[2]);
	}
	return(line);
}
int main(int argc,char **argv)
{
	std::string filename;
	std::string new_file;
	std::string line;

	if(error_argv(argc))
		return(1);
	filename=argv[1];
	std::ifstream in(filename);
	if(in.fail() or !getline(in,line))
	{
		std:: cout<<"wrong input filename"<<std::endl;
		return(1);
	}
	new_file=filename+".replace";
	std::ofstream out(new_file);
	if(out.fail())
	{
		std::cout<<"wrong output filename"<<std::endl;
		return(1);
	}
	out<<ft_replace(line,argv);
	while(getline(in,line))
	{
		out<<std::endl<<ft_replace(line,argv);
	}


}