
def multiply(arr):
   n = len(arr)
   result = 1;

   for i in range(n):
   	result = result * arr[i];

   return result

arr = [3, 5, 9, 11, 33]

print(multiply(arr))
