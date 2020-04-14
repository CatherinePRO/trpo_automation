﻿Что нужно сделать чтобы получить первый релиз на вашем компьютере:

Установить linux (любой: Ubuntu, CentOS, Debain)

Зайти в консоль (Ctrl + Alt + t)

Перейти в нужную вам папку (cd /home/$USER/path/to/your/dir)

Склонировать наш репозиторий (git clone https://github.com/Students-of-the-city-of-Kostroma/trpo_automation.git)

Перейти в папку с проектом (cd trpo_automation/)

Перейти на ветку Finally (git checkout Finally)

Если необходимо, скопировать папку с проектом в другое необходимое вам место (/path/to/dir/)

Изменить путь к папке с логами в файле /path/to/dir/config.py (path_to_logs = "/path/to/dir/logs/")

Сделать файл main.py исполняемым, инструкция в (instructions)(at start) (sudo chmod 0755 /path/to/dir/main.py)

Чтобы запустить проект, ввести в консоль инструкцию в (instructions)(start) (start-stop-daemon -Sbvx /path/to/dir/main.py) Эта инструкция запустит проект в виде демона и его работу из консоли невозможно будет отследить Чтобы иметь возможность прозрачно отслеживать работу модуля, нужно ввести команду без флага -b, который и отвечает за скрытую работу (start-stop-daemon -Svx /path/to/dir/main.py) Тогда модуль можно будет остановить в консоли сочетанием клавиш Ctrl + c Кроме того, в таком формате запуска, все ошибки видны будут сразу.

Чтобы остановить проект, ввести в консоль инструкцию в (instructions)(stop) (start-stop-daemon -Kvx /usr/bin/python3 /path/to/dir/main.py)

Вуаля! Первый релиз настроен и работает! Работу релиза можно проверить в папке /path/to/dir/logs, куда после каждого круга скидываются логи.

Задачей каждого является наполнение своего отданного на реализацию метода Для этого всё окружение и импорты настроены, остаётся лишь добавить функциональную нагрузку для методов