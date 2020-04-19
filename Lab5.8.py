'''
8.На складе хранится ряд деталей, наименования которых представляют
некоторую последовательность символов (например, Д21А, Д52Н и т.д.).
Подсчитать количество наименований деталей, которые начинаются с Д2. Все
имеющиеся наименования вводить с клавиатуры; поскольку число деталей
заранее не известно, заканчивать ввод данных следует вводом пустой строки
(строки, не содержащей ни одного символа), т.е. нажатием клавиши ВВОД
без ввода наименования детали.
'''

all_details = []
count = 0
print('Input stock list of details. If you want to stop inputting, just press ENTER ')
while 1 :
    new_detail = input('Input name of new detail: ').upper()
    if new_detail == '': break
    if new_detail[0] == 'D' and new_detail[1] == '2': count = count + 1
    all_details.append(new_detail)

print('Quantity of details: ', len(all_details))
print(*all_details)
print('Quantity of details that mark start which "D2":', count)