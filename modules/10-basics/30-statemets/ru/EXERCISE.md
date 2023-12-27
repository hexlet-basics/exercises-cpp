Выведите на экран друг за другом три имени: *Robert*, *Stannis*, *Renly*. В результате на экране должно отобразиться:

<pre class='hexlet-basics-output'>
Robert
Stannis
Renly
</pre>

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
