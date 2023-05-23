#pragma once
class BadCharTbl
{
private:
	int badChar[256 * 256];


public:
	BadCharTbl() {

	}
	~BadCharTbl() {
		
	}
	/*������� ����-�������� ����������� ��������� �� �������� ������ 
		��������� ������ �� ����������� ������� ������� ������������� ������ ��� ���������� ���������*/
	void Init(const char* s) {
		for (int i = 0; i < sizeof(badChar) / 4; i++) {
			badChar[i] = strlen(s) - 1;
		}
		for (int i = 0; i < strlen(s); i++) {
			badChar[s[i] + (s[i + 1] << 7)] = i;
		}
	}

	operator int() const { return sizeof(badChar)/4; }
	int operator[] (int c) const { return badChar[c]; }

};

