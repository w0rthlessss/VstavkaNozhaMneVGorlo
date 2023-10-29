#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

//����������� ������� ����
enum InputMenu { consoleInput = 1, fileInput, randomInput, exitApp };

//������� ������ ��� ������������ �����
void IgnoreLine();

//���������� � ������� ������ ����
int GetMenuOption(string message);

//���������� � ������� ������ �����
int GetInt(string message);

//���������� ���� � �����
string GetLink(string message);

//���������� ������ ������� (y/n)
char GetAnswer(string message);
