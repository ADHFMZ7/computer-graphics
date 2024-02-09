from sphere import Sphere
import numpy as np

def f(x: float): return x**2


class Spheres:
    objects = []
    objects.append(Sphere(center=(0, -9000-0.069, 0), radius=9000, diffuse=(1, 1, 1))) 
    objects.append(Sphere(center=(0, 0, -9000), radius=9000, diffuse=(0, 0, 0))) 

    for i in np.arange(-1.25, 1.25, 0.25):
        objects.append(Sphere(center=(i-0.18, 0, 0),  radius=0.08, diffuse=((i+1.25)/2.5, 0, 0)))
        objects.append(Sphere(center=(0-0.18, i, 0),  radius=0.07, diffuse=(0, (i+1.25)/2.5, 0)))
        objects.append(Sphere(center=(0-0.18, 0, i),  radius=0.07, diffuse=(0, 0, (i+1.25)/2.5)))

    @staticmethod
    def get_spheres():
        return Spheres.objects
