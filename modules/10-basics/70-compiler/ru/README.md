С++ — компилируемый язык. Поэтому прежде чем запускать написанную программу, нам нужно превратить текстовые файлы с исходным кодом в машинный код, который понятен компьютеру.

В этом уроке мы узнаем, что такое компилятор. Также разберем, как происходит процесс компиляции, который можно разбить на две стадии: **компиляция** и **компоновка**.

## Компиляция

Чтобы скомпилировать программу на C++, мы используем специальную программу. Она последовательно просматривает каждый файл исходного кода (.cpp) и выполняет две важные задачи:

1. Проверяет код на соответствие правилам языка C++. В противном случае компилятор выдаст ошибку и номер соответствующей строки, чтобы помочь точно определить, что нужно исправить. Процесс компиляции будет прерван, пока ошибка не будет исправлена

2. Переводит исходный код C++ в файл машинного кода, называемый объектным файлом

Объектные файлы обычно имеют имена `name.o` или `name.obj`, где name совпадает с именем файла `.cpp`, из которого он был создан.

Если бы в вашей программе было бы три файла `.cpp`, компилятор сгенерировал бы три объектных файла.

Компиляторы C++ доступны для многих операционных систем. Например, в стандартной поставке многих дистрибутивов Linux есть компилятор **gcc**. В Windows можно пользоваться IDE Visual Studio — в нее уже встроен компилятор и система сборки.

## Компоновка

После того, как компилятор создал один или несколько объектных файлов, включается другая программа — **компоновщик** или **линкер**. Работа компоновщика состоит из трех частей:

1. Берет все объектные файлы, сгенерированные компилятором, и объединяет их в единую исполняемую программу

2. Помимо возможности связывать объектные файлы компоновщик также может связывать файлы библиотек. Файл библиотеки — это набор предварительно скомпилированного кода, который был упакован для повторного использования в других программах

3. Обеспечивает правильное разрешение всех межфайловых зависимостей. Например, если мы определяем что-то в одном файле `.cpp`, а затем используем это в другом файле `.cpp`, компоновщик соединит их вместе. Если компоновщик не может связать ссылку с чем-то с ее определением, мы получим ошибку компоновщика, и процесс линковки прервется

## Системы сборки

Когда проект содержит десятки и даже сотни файлов с исходным кодом, процесс его сборки надо автоматизировать. Здесь на помощь приходят системы сборки, которые автоматически запускают все нужные команды, чтобы скомпилировать и скомпоновать все файлы проекта. В итоге на выходе получается один исполняемый файл.

Одной из таких систем является утилита `Make` и `Makefile`. В `Makefile` описываются все цели и зависимости проекта, а утилита `Make` смотрит в этот файл и запускает компилятор с соответствующими командами.

Еще одна популярная система сборки проектов — утилита `CMake`, которая работает поверх `Make`. Она отличается своей кроссплатформенностью и позволяет делать сборки под различные операционные системы.

Компиляции и сборка программы не менее важный процесс, чем написание самой программы.
