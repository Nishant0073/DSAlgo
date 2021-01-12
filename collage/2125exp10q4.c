/*
Roll No : 2125
Div.    : B (SYCSE)

Que. : Hashing implimentation.*/

#include<stdio.h>
#include<stdlib.h>
int hash[10];


int find_key(int key)
{
	int index = key % 10;

	if (hash[index] == key)
		return index;
	else
	{
		for(int i=1;i<10;i++)
        {
            int index=(key+i)%10;
            if(hash[index]==key)
                return index;
        }
	}

    return -1;
}

int hashindex(int data)
{
	int index = data % 10;
	if (hash[index] != -1)
	{
        for(int i=1;i<10;i++)
        {
            int tempindex=(data+i)%10;
           	if (hash[tempindex] == -1)
				return tempindex;
        }
		
		return -1;

	}
	else
	{
		return index;
	}
}

void hashing()
{

	printf("Enter 10 elements of array:\n");

	for (int i = 0; i < 10; i++)
	{
		int data;
		scanf("%d", &data);

		int index = hashindex(data);
		if (index == -1)
		{
			printf("The hash table is full..\n");
		}
		else
		{
			hash[index] = data;
		}
	}
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		hash[i] = -1;
	}
	hashing();

	int key;
	printf("Enter the element to find in hash table:\n");
	scanf("%d", &key);
	int index = find_key(key);
	if (index == -1)
	{
		printf("The Key %d is not present in hash table .\n", key );
	}
	else
	{
		printf("The Key %d is  present in hash table at index %d .\n", key , index);
	}
	return 0;

}
