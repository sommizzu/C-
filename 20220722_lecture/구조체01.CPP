struct abc{
	int a;
double; b};

struct xyz{
	int x;
	double y;
};


[1방법] struct abc{
	int a;
	double b;
	struct xyz xyz.d1;
};

[2방법] struct abc{
	int a;
	double b;
	struct xyz{
		int x;
		double y;
	};
};     // 안되는 이유 : 그림으로 설명

//,해결방법 

[2방법] struct abc{
	int a;
	double b;
	struct xyz{
		int x;
		double y;
	}xyz.d2 ; 
};  