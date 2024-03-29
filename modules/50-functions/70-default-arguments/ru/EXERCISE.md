Напишите функцию `GetHiddenCard()`, которая принимает в качестве первого параметра номер кредитной карты(16 символов) в виде строки и возвращает его скрытую версию.  Если исходная карта имела номер 2034399002125581, то скрытая версия выглядит так ****5581. Другими словами, функция заменяет первые 12 символов, на звездочки. Количество звездочек регулируется вторым необязательным параметром. Значение по умолчанию — 4.

```cpp
GetHiddenCard("2034399002121100", 1); // "*1100"
GetHiddenCard("1234567812345678", 2); // "**5678"
GetHiddenCard("1234567812345678", 3); // "***5678"
GetHiddenCard("1234567812345678");    // "****5678"
```

Для извлечения подстроки воспользуйтесь методом `substr()`:

```cpp
int main() { 
  std::string str = "2034399002121100";

  std::cout << str.substr(str.length() - 4, 4); // 1100
}
```

Для повторения строки указанное количество раз воспользуйтесь `std::string`:

```cpp
int main() { 
  std::cout << std::string(4, '*') // ****
}
```
