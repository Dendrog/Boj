#include <iostream>
#include <unordered_map>

int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;
	
	std::cin >> n >> m;
	std::unordered_map<std::string,std::string> s;
	std::string l,k;
	for (int i=0;i<n;i++){
		std::cin >> l >> k;
		s[l]=k;
	}
	for (int i=0;i<m;i++){
		std::cin >> l;
		std::cout << s[l] << '\n';
	}
	return 0;
}