# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import numpy as np
from pylab import*
x=np.linspace(0,3,51)
y=x**2*np.exp(-x**2)
plot(x,y)
grid(True)
xlabel('x')
ylabel('f(x)')
title('Grafico 1')
show()
