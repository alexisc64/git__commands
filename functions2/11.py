
def perfect_number(number):
    sum = 0
    for x in range(1, number):
        if number % x == 0:
            sum += x
    return sum == number

print(perfect_number(8))
