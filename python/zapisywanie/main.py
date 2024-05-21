def zapis():
	with open("mirek.txt","w") as plik:
		plik.write("kowalski.\n")
		plik.write("analiza.\n")
def odczyt():
	with open("mirek.txt","r") as plik:
		for linia in plik:
			print(linia.strip())
zapis()
odczyt()
