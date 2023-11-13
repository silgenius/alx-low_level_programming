# 100-tests.py

import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')

a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))  # Changed from div to divi to avoid conflict with Python's div function
print("{} % {} = {}".format(a, b, cops.mod(a, b)))

