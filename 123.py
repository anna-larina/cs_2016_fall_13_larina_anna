from functools import reduce
import math
import matplotlib.pyplot as plt
import numpy as np

while True:

    print("Задания")
    print("1 а)Введите '1.a' для вычисления суммы c for-циклом")
    print("  b)Введите '1.b' для вычисления суммы с while-циклом")
    print("  c)Введите '1.c' для вычисления суммы с рекурсией")
    print("2)Введите '2' для вычисления степени двойки ,которая не больше вашего числа ")
    print("3)Введите '3' для вычисления cреднего арифметического")
    print("4)Введите '4' для вычисления номера числа в последовательности Фибоначчи")
    print("5)Введите '5' для вычисления факториала")
    print("6)Введите '6'для замены максимального и минимального ")
    print("7)Введите '7' для нахождения расстояния между точками  ")
    print("8)Введите '8' для построения  графика траектории снаряда, выпущенного из пушки на Марсе. ")
    print("Введите '0' чтобы завершить работу программы ")

    user_input = input(":")

    elif user_input == "1.a":
        sum1 = input("Введите числа через пробел:")
        sum1 = sum1.split()
        b1 = []
        h = 0
        for i in sum1:
            b1.append(float(i))
        for i in b1:
            h += i

        print(h)
    elif user_input == "1.b":
        lst = input("Введите числа через пробел:")
        lst = lst.split()
        x1 = 0
        j = 0
        sum2 = 0
        while True:  # бесконечный цикл
            x1 = float(lst[j])
            sum2 += x1
            j += 1
            if j == len(lst):  # нашли нуль
                break  # выходим из цикла
        print(sum2)  # печатаем результат
        
    elif user_input == "1.c":
        lst = input("Введите числа через пробел:")
        lst = lst.split()
        h = 0
        k = 0

        def sum3(p, k1=0):
            k1 += float(lst[p - 1])
            if p == 0:
                return 0
            return sum3(p - 1) + k1


        print(sum3((len(lst))))

    elif  user_input == "2":
        n = int(input("Введите натуральное число:"))
        i = 0
        while 2 ** (i + 1) <= n:
            i += 1
        print("Степень", 2 ** i)
        print("Показатель степени", i)
    elif user_input == "Среднее арифметическое" or user_input == "3":
        lst = input("Введите числа через пробел:")
        b = []
        lst = lst.split()
        for i in lst:
            b.append(float(i))
        sum1 = reduce(lambda a1, x: a1 + x, b)
        sum2 = float(sum1)
        lent = len(lst)
        cp = float(sum2 / lent)
        print(cp)
    elif user_input ==  "4":
        fib = input("Введите число:")
        fib = fib.split()
        b1 = []
        for i in fib:
            b1.append(float(i))
        h = sum(b1)
        k = 0
        f1 = 1
        f2 = 1
        i = 2
        n = 2
        fib_sum = 0
        while f1 < h:
            f1 += f2
            f2 = f1 - f2
            n += 1
        if f1 == h:
            print("Число {0} является ".format(h), n, "числом Фибоначи")
        else:
            print("-1")
            
            if user_input == "Выход" or user_input == "0":
        break
    elif user_input == "Факториал" or user_input == "5":
        n = int(input("Введите НАТУРАЛЬНОЕ число,для вычисления факториала:"))
        res = 1
        for i in range(1, n + 1):
            res *= i
        print(res)
            
    elif user_input == "Замена" or user_input == "6":
        lst = input("Введите числа через пробел:")
        lst = lst.split()
        print("Ваш список", lst)
        mn = min(lst)
        mx = max(lst)
        imn = lst.index(mn)
        imx = lst.index(mx)
        lst[imn], lst[imx] = lst[imx], lst[imn]
        print("Ваш список с заменой", lst)
    elif user_input == "Расстояние" or user_input == "7":
        lst = input("Введите числа x1 x2 y1 y2 через пробел:")
        lst = lst.split()
        x1 = float(lst[0])
        x2 = float(lst[1])
        y1 = float(lst[2])
        y2 = float(lst[3])
        d = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
        print(d)
    elif user_input == "График" or user_input == "8":
        v = input("Введите начальную скорость:")
        fib1 = v.split()
        b1 = []
        for i in fib1:
            b1.append(float(i))
        v = sum(b1)
        g = 3.86
        o = input("Введите угол в градусах:")
        fib = o.split()
        b1 = []
        for i in fib:
            b1.append(float(i))
        h = sum(b1)
        m = h * 0.0175

        lim = 0
        t4 = 1
        t3 = 1
        t2 = 1
        t5 = 1
        while t2 > 0:
            t2 = v * math.sin(m) * t4 - (g * t4 ** 2) / 2
            t4 += 0.01
        t = np.arange(0, t4, 0.01)
        t1 = v * math.cos(m) * t
        t2 = (v * math.sin(m) * t - (g * t ** 2) / 2)
        plt.plot(t1, t2)
        plt.axis('equal')
        plt.xlabel(r'$S$')  # Метка по оси x в формате TeX
        plt.ylabel(r'$H$')  # Метка по оси y в формате TeX
        plt.title(r'$Speed on Mars$')  # Заголовок в формате TeX
        plt.grid(True)  # Сетка
        plt.show()  # Показать график

    else:
        print("Пожалуйста,проверьте правильность введенной команды")
