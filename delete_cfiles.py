import os

dir = os.getcwd()

for i in range(10,19):
    filename=f"{i}-main.c"
    filepath=os.path.join(dir,filename)

    os.remove(filepath)
