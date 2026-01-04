# importing the relevant packages
import pyvista as pv
import scipy.spatial as sp
import meshio
import os
import matplotlib.pyplot as plt
import numpy as np
import pygmsh as pg
import jax.numpy as jnp
from units_constants import ConversionFactors as uc