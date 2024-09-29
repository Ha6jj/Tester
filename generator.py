from random import randint

def single_test():
    n = randint(2, 20)
    line = str(n) + " "
    for i in range(n):
        line += str(randint(-2 ** 31, 2 ** 31 - 1)) + " "
    return line


tests_num = 10

with open("testset", "w") as file:
    for _ in range(tests_num):
        test = single_test() 
        file.write(test + "\n")