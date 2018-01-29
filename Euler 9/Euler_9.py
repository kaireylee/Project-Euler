#*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
#
# a2 + b2 = c2
# For example, 32 + 42 = 9 + 16 = 25 = 52.
#
# There exists exactly one Pythagorean triplet for which a + b + c = 1000.
# Find the product abc.

import time

start = time.time()

def triplets(a, b, c):
    if a**2 + b**2 == c**2:
        return True
    return False

a = [x for x in range(1,1000)]

for num in a:
    for dig in range(num, 1000-num):
        for i in range(dig, 1000-dig):
            if num+dig+i == 1000:
                if triplets(num, dig, i):
                    print(num, dig, i)
                    print("Product: {}".format(num*dig*i))
                    elapsed = time.time() - start
                    print("Time: {:.5f} seconds".format(elapsed))
                    exit(1)
