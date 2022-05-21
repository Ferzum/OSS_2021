i.     Что происходит при прерывании скрипта text-trap.sh? Объясните, почему.
       Ему приходит сигнал SIGINT нажатия Ctrl+C, trap перехватывает сигнал и обрабатывает его соответствующим образом (в данном случае завершаясь с кодом 1 и ехом об аварийном завершении) 
ii.    Напишите, по какой причине выводы команды ls -l /proc/self и ls -l /proc/$$ отличаются?
       self - относится к текущему выполняющемуся процессу, то есть показывает pid ls-а, а $$ - pid shell-а
iii.   Напишите, какие дескрипторы в выводе команды ls -l /proc/self/fd отвечают за stdin, stdout, stderr.
       0 - stdin, 1 - stdout, 2 - stderr
iv.    Что происходит с дескрипторами при перенаправлении потоков stdout и stderr в файлы при выполнении команды ls -l /proc/self/fd > /tmp/ls.out 2> /tmp/ls.err?
       Они меняются и теперь вывод происходит не на экран /dev/pts/0, а в указанные файлы.
v.     Запишите эту же команду, добавив к ней перенаправление потока stdin. Что изменилось?
       Если файл для stdin существует, то просто поменяется дескриптор потока 1, если нет, то будет вывод ошибки в /tmp/ls.err.
vi.    Какой эффект наблюдается при выполнении команды exec ps -l?
       Терминал закрывается поскольку код bash-а был заменен кодом ps -l, которая выполнилась и закрылась.
vii.   Что означает pos при выводе содержимого файла /proc/$$/fdinfo/3?
       Смещение внутри файла.
viii.  Существует ли возможность читать содержимое файла test.out даже после его удаления? Почему так происходит?
       Да, так как при выполнении лабы был сменен дескриптор и по нему все еще моно обратиться.
