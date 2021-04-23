def string_reverse(string):

    reversed = ''
    i = len(string)
    while i > 0:
        reversed += string[ i - 1 ]
        i = i - 1
    return reversed

print(string_reverse('cococabra'))
