from random import randint
from math import fabs

'''
На складе комплектующих деталей хранятся N деталей, каждая из
которых характеризуется записью следующего вида:
DTL ;
PR1;
PR2, PR3;
Здесь DTL – наименование детали; PR1, PR2, PR3 – некоторые признаки
детали. Необходимо подготовить детали к запуску в сборочный цех. Для этого
их следует разбить на пары (Z1, Z2), где Zl, Z2 – переменные типа DETAL,
таким образом, чтобы разность |Z1.PR1-Z2.PR1| была как можно меньшей для
каждой пары (Z1, Z2). Вывести на печать все наименования пар запуска.
'''


result = []
details1 = { "D1.%i"%i:(randint(1,100),True,True) for i in range(0,20)}
details2 = { "D2.%i"%i:(randint(1,100),True,True) for i in range(0,20)}


for i, val in enumerate(details1):
    print(i, val, details1[val][0])

for i, val in enumerate(details2):
    print(i, val, details2[val][0])



for i, val1 in enumerate(details1):
    elem = (fabs(details1[val1][0] - details2["D2.1"][0]),"D1","D2")
    for i, val2 in enumerate(details2):
        if fabs(details1[val1][0] - details2[val2][0]) < elem[0]:
            elem = (fabs(details1[val1][0] - details2[val2][0]),val1,val2)
    else : result.append(elem);
result.sort()
for i,val in enumerate(result):
    print(i,val)
