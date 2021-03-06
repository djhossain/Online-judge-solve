#include <cstdio>

int main(){
	int T, N, id, sum, root;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		root=0;
		while(N--){
			scanf("%d%d", &id, &sum);
			// Every node appears once as an id, and
			// every node except for the root appears
			// once in a sum.  So if we subtract all
			// the sums from all the ids, we're left
			// with the root id.
			root+=id-sum;
		}
		printf("%d\n", root);
	}
	return 0;
}