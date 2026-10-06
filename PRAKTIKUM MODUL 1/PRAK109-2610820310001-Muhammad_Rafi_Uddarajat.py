pasukan = 958730
daftar_pahlawan = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"]
pahlawan = len(daftar_pahlawan)
perPahlawan = pasukan // pahlawan

nama_pahlawan_str = ", ".join(daftar_pahlawan)

print(f"Jumlah pasukan yang dibawa Yu Zhong = {pasukan}")
print(f"Jumlah pahlawan = {pahlawan} ({nama_pahlawan_str})")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {perPahlawan} pasukan")