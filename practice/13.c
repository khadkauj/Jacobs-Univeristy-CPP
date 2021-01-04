#include <stdio.h>




struct coffee {
int id;
unsigned char property;//to check result
};




void test(struct coffee *a)
{
	if (((a->property) & (1 << 0)) && ((a->property) <<(1 << 3)) && ((a->property) & (1 << 6)))
	{
		printf("%d\n",1 );
	}
	else
	{
		printf("%d\n",0 );
	}
}


void set_coffee_property(struct coffee* c, const unsigned char property)
{
	c->property = (c->property | (1 << property));
}

void unset_coffee_property(struct coffee* c, const unsigned property)
{
	c->property = (c->property & ~(1 << property));
}



void print(struct coffee* c)
{ 

	for (int i = 7; i >= 0; --i)
	{
			if (c->property & (1 << i))
			{
				printf("%d",1 );
			}
			else{
				printf("%d", 0 );
			}
	}
	printf("\n");

}

int main(int argc, char const *argv[])
{
	struct coffee a;
	a.id = 2;
	a.property = 'I';
	printf("%d\n", a.property);
	print(&a);
	test(&a);
	print(&a);
	unset_coffee_property(&a, 3);
	print(&a);


	return 0;
}