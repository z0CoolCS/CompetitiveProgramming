#include<stdio.h>

using namespace std;

int main(){
	int t,n,seconds,mile,juice,i=1;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		mile=0;juice=0;
		while(n--){
			scanf("%d",&seconds);
			mile+=seconds/30+1;
			juice+=seconds/60+1;

		}
		mile*=10;
		juice*=15;
		if(mile>juice)
			printf("Case %d: Juice %d\n",i++,juice);
		else if(mile<juice)
			printf("Case %d: Mile %d\n",i++,mile);
		else
			printf("Case %d: Mile Juice %d\n",i++,juice);


	}

	return 0;

}
