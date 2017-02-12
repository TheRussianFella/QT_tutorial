file = open("dict.txt", "w")

for i in range(10000):
    file.write(str(i) + " " + str(i) + "/")

file.close()
