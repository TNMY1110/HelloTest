f = open("C:/Users/405/projects/0119/새파일2.txt", 'r')
while True:
    line = f.readline()
    if not line:
        break
    
    print(line)

f.close()

