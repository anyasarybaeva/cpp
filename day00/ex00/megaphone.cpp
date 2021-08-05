#include<iostream>
int main(int argc, char **argv)
{
	int i;
	int i1;

	i = 0;
	if(argc==1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	}
	else
	{
		while(++i<argc)
		{
			i1 = 0;
			while(argv[i][i1])
			{
				if(argv[i][i1]>='a' && argv[i][i1]<='z')
					argv[i][i1]=argv[i][i1]-32;
				i1++;
			}
			std::cout<<argv[i];
		}
		std::cout<<std::endl;
	}
}
