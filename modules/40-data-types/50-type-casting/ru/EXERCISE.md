В прошлом модуле мы писали программу, которая переводила евро в доллары, а доллары в рубли. На тот момент мы не знали типов данных с плавающей точкой и использовали автоматический вывод типов с помощью `auto`. Отрефакторите ее используя новые знания, используйте явное приведение типов.

Напишите программу, которая берет исходное количество евро, записанное в переменную `euros_count`, переводит евро в доллары и выводит на экран. Затем полученное значение переводит в рубли и выводит на новой строчке.

Пример вывода для 100 евро:

<pre class='hexlet-basics-output'>
125.0
7500.0
</pre>

Считаем, что:

- 1 евро = 1.65 долларов
- 1 доллар = 60 рублей
