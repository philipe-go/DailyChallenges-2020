#Square every digits

def square_digits(num):
    result = ''
    for i in str(num):
        result += str(int(i) ** 2)
    return int(result)
    pass