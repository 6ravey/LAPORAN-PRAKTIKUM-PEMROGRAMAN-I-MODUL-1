import math

alas = 5      # Sisi C
tinggi = 12   # Sisi A

sisiA = tinggi
sisiC = alas
sisiB = int(math.sqrt((sisiA ** 2) + (sisiC ** 2))) # Sisi Miring

keliling = sisiA + sisiB + sisiC
luas = int(0.5 * alas * tinggi)

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print("Jawab :")
print(f"Sisi A = {sisiA} cm")
print(f"Sisi B = {sisiB} cm")
print(f"Sisi C = {sisiC} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")