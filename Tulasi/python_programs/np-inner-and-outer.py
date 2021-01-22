import numpy
l=map(int,raw_input().split())
m=map(int,raw_input().split())
A = numpy.array(l)
B = numpy.array(m)
print numpy.inner(A, B)
print numpy.outer(A, B)  