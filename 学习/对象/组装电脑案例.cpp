#include<iostream>
#include<string>
using namespace std;

/// <summary>
/// CPU基类
/// </summary>
class CPU {
public:
	virtual void Calculate() = 0;

	virtual ~CPU() {
		cout << "CPU base is closing" << endl;
	}
};
/// <summary>
/// 显卡基类
/// </summary>
class GraphicCard {
public:
	virtual void Display() = 0;

	virtual ~GraphicCard() {
		cout << "GraphicCard base is closing" << endl;
	}
};
/// <summary>
/// 内存条基类
/// </summary>
class RAM {
public:
	virtual void Save() = 0;

	virtual ~RAM() {
		cout << "RAM base is closing" << endl;
	}
};

class IntelCPU :public CPU {
public:
	void Calculate() {
		cout << "Intel CPU is calculating sth." << endl;
	}

	~IntelCPU() {
		cout << "Intel CPU is closing" << endl;
	}
};

class IntelGraphicCard : public GraphicCard {
public:
	void Display() {
		cout << "Intel Graphic card is displaying sth." << endl;
	}

	~IntelGraphicCard() {
		cout << "Intel Grphic card is closing" << endl;
	}
};

class IntelRAM : public RAM {
public:
	void Save() {
		cout << "Intel RAM is saving sth." << endl;
	}

	~IntelRAM() {
		cout << "Intel RAM is closing" << endl;
	}
};

class LenovoCPU : public CPU {
public:
	void Calculate() {
		cout << "Lenovo CPU is calculating sth." << endl;
	}

	~LenovoCPU() {
		cout << "Lenovo CPU is closing" << endl;
	}
};

class LenovoGrahpicCard : public GraphicCard {
public:
	void Display() {
		cout << "Lenovo Graphic card is displaying sth." << endl;
	}

	~LenovoGrahpicCard() {
		cout << "Lenovo Grphic card is closing" << endl;
	}
};

class LenovoRAM : public RAM {
public:
	void Save() {
		cout << "Lenovo RAM is saving sth." << endl;
	}

	~LenovoRAM() {
		cout << "Lenovo RAM is closing" << endl;
	}
};

class Computer {
public:
	Computer(CPU* ccpu, GraphicCard* graphicCard, RAM* ram) {
		c_CPU = ccpu;
		c_GraphicCard = graphicCard;
		c_RAM = ram;
	}

	CPU* c_CPU;
	GraphicCard* c_GraphicCard;
	RAM* c_RAM;

	void Work() {
		c_CPU->Calculate();
		c_GraphicCard->Display();
		c_RAM->Save();
	}

	~Computer() {
		delete c_CPU;
		delete c_GraphicCard;
		delete c_RAM;
	}
};


void testComputer(Computer* computer) {
	computer->Work();
}

void test10() {
	Computer computer1(new IntelCPU(), new IntelGraphicCard(), new LenovoRAM());
	testComputer(&computer1);

	Computer computer2(new LenovoCPU(), new IntelGraphicCard(), new IntelRAM());
	testComputer(&computer2);

	//delete computer1;
	//delete& computer2;
}


int main() {
	test10();
	system("pause");
	return 0;
}