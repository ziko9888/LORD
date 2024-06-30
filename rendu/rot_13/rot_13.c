#include <unistd.h>

void ft(char c){
	write(1, &c, 1);
}

int main(int ac, char *av[]){
	int i = 0;
	char *r = av[1];
	if(ac == 2){
	while(r[i]){
		if(r[i] >= 'a' && r[i] <= 'm' || r[i] >= 'A' && r[i] <= 'M'){
			ft(r[i] + 13);
		}else if(r[i] >= 'n' && r[i] <= 'z' || r[i] >= 'N' && r[i] <= 'Z'){
			ft(r[i] - 13);
		}else{
			ft(r[i]);
		}
		i++;
	}
	}
	ft('\n');
}
