#pragma once

enum COLOR {Red,Black};
class BSTnode
{
public:
	
	BSTnode* Parent, * Left_Child, * Right_Child;
	COLOR Color;
	int Height;
	int Data;
	
	BSTnode(int d)
	{
		Data = d;
		Parent = Left_Child = Right_Child = nullptr;
		Color = Red;
		Height = 1;
	}

	

};

