tablica = []
sum = 0
for i in range(1,4):
	x=int (input("Podaj liczbę: "))
	tablica.append(x)


for element in tablica:
	sum += element
print("suma wszystkich liczb: "+ str(sum))
if sum<=0:
	print("Tablica jest mniejsza od zera")
if sum %2==0:
	print("liczba jest parzysta")
