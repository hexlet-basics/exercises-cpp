Выведите на экран друг за другом три имени: _Robert_, _Stannis_, _Renly_. В результате на экране должно отобразиться:

```text
Robert
Stannis
Renly
```

Для каждого имени можете используйте свой собственный вызов `std::cout <<`.

Вывод в поток `std::cout` не умеет самостоятельно делать перевод строки, по этому это надо указать явно управляющим символом "\n" или воспользоваться функцией `endl`.

```cpp
std::cout <<  "Mother of Dragons\n";
std::cout <<  "Mother of Dragons" << "\n";
std::cout <<  "Mother of Dragons" << std::endl;
```

 Подсказка:

- С помощью оператора вставки `<<` можно выстраивать цепочки:

```cpp
std::cout << "Mother of Dragons\n" << "Dracarys!\n";
```
