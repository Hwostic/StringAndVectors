// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class MyClass
{
private:
    string str;
    char* str2;

public:
    MyClass() {};
    ~MyClass() {};
    MyClass(const string str, char* str2)           //сравнение записи string и char - для char надо выделить память, скопировать
        : str(str), str2(new char[sizeof(str2)])
        //strcpy
    {}
};

int main()
{
    setlocale(LC_ALL, "ru");
    system("chcp 1251");

    /*
    string text("Hello");
    string symbol (8, 'a'); // получаем 8 букв а

    cout << symbol << endl;

    string month("May");
    cout << month<<endl;
    
    string str = text + month +"!"; //конткатенация строк
    cout << str << endl;


    // работаем с   string str = text + month +"!";
    cout << "Длина строки: " << str.length()<<endl; //получение длины строки
    cout << "Пуста ли строка? " << (str.empty() ? "Да" : "Нет") << endl; // str.empty() - проверяет пустая ли строка, ? - условие выполняется, : - если не выполняется
    cout << "Первый символ: " << str[0] << endl;
    cout << "Последний символ: " << str[str.length() - 1] << endl;

    cout << "Первый символ: " << str.at(0) << endl; //первый символ строки, at проверяет выходим ли за пределы

    str.replace(0, 4, "Привет");    //замена подстроки, 0 - откуда заменяем, 4 - сколько удаляем, Привет - на что заменяем
    cout << str << endl;

    str.insert(0, "Вставка");    //вставка подстроки
    cout <<str<<endl;

    int pos = str.find("Привет"); //Поиск подстроки, возвращает индекс, с которого начинается введенное слово
    cout << pos <<endl;

    string substr = str.substr(pos, 6); //метод .substr возвращает символы (с какой позиции, сколько символов возвращаем)
    cout<<"Извлеченная подстрока: " << substr << endl;

    str.erase(0, 7);    //удаляет символы (начиная с какого и сколько)
    cout << str << endl;

    string str2, str3;

    cout << "Введите строку: " << endl;
  // ! cin >> str2; // считывает до первого разделителя (например, пробела)
    getline(cin, str2);     // считывает всю введенную строку до Enter
    cout << str2 <<endl; 

    getline(cin, str3, '0');     // считывает все введенные строки до нажатия 0+Enter
    cout << str3;
    */


    // можно работать с любым типом данных

    vector<int> numbers;
    vector<string> str;
    vector<MyClass> myClass;
    

    int count;

    cout << "Сколько чисел хотите ввести?" << endl;

     cin >> count;
     cout << "Введите " << count << " целых чисел" << endl;

     for (int i = 0; i < count; i++)
     {
         int value;
         cin >> value;
         numbers.push_back(value); //Добавление элемента  

     }
     for (int i = 0; i < numbers.size(); i++) // numbers.size() возвращает количество добавленных элементов
     {
         cout << numbers[i] << " ";
     }
     cout << endl << "Размер вектора " << numbers.size() <<endl;



     numbers.insert(numbers.begin()+2, 10);   //вставляем число 10, numbers.begin() - возвращает итератор на первый элемент вектора , +2 - на сколько надо подвинуть
    
     for (int i = 0; i < numbers.size(); i++) // numbers.size() возвращает количество добавленных элементов
     {
         cout << numbers[i] << " ";
     }

     cout << endl << "Размер вектора " << numbers.size() << endl;
}

