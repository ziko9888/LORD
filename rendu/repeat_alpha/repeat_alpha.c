#include <unistd.h>

void ft(char c){
	write(1, &c, 1);
}

int main(int ac, char *av[]){
	int i = 0;
	int j;
	if(ac == 2){
		while(av[1][i]){
			j = 0;
			if(av[1][i] >= 'a' && av[1][i] <= 'z'){
			while(j < av[1][i] - 'a' + 1){
				ft(av[1][i]);
				j++;
			}
			}else if(av[1][i] >= 'A' && av[1][i] <= 'Z'){
                        while(j < av[1][i] - 'A' + 1){
                                ft(av[1][i]);
                                j++;
                        }
			}else{
				ft(av[1][i]);
			}
			i++;
		}
	}
	ft('\n');
}
