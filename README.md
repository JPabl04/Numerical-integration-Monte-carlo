# Numerical integration using a Monte Carlo method.

The idea behind this method is to generate many random points which can be outside or below the function we want to integrate. Is important to keep track of how many points are generated below the graph. Then, one creates any shape in which the graph is fully contained in the domain of integration. The most common shape used is a rectangle, this is because later we will need to compute the area of this region. From the relation 

$\frac{Area \quad below \quad the \quad function}{Rectangle \quad area}=\frac{Points \quad below \quad the \quad function}{All \quad points \quad generated}$ 

the definite integral can be obtained.

In this example I used the gaussian function $e^{-x^{2}}$ (in blue) and the limits of integration are from $-100$ to $100$. The rectangle (in yellow) ranges in the same values for the horizontal axes and from $0$ to $1$ for the vertical axes

![gaussian_function](https://github.com/JPabl04/Numerical-integration-Monte-carlo/assets/142553256/3444685b-92ae-4e96-b886-10778131d018)

Generating $10000$ random points, I obtain that 

$\int_{-100}^{100} e^{-x^{2}} dx \approx 1.76$

Comparing this value with the given by the graph calculator from Geogebra ($1.77$), one can obtain good results from this method.
