def string_test(s):
    uppercase = 0
    lowercase = 0
    for c in s:
        if c.isupper():
           uppercase += 1
        elif c.islower():
           lowercase+= 1
        else:
           pass
    print ("Uppercase characters : ", uppercase)
    print ("Lowercase Characters : ", lowercase)

string_test('Testing Test')
