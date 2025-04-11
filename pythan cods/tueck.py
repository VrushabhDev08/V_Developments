import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

def create_truck(ax):
    # Define vertices of the truck's main body
    vertices = np.array([[0, 0, 0], [4, 0, 0], [4, 2, 0], [0, 2, 0],
                         [0, 0, 1.5], [4, 0, 1.5], [4, 2, 1.5], [0, 2, 1.5]])
    
    # Create the faces of the truck body by connecting vertices
    faces = [[vertices[j] for j in [0, 1, 5, 4]],
             [vertices[j] for j in [1, 2, 6, 5]],
             [vertices[j] for j in [2, 3, 7, 6]],
             [vertices[j] for j in [3, 0, 4, 7]],
             [vertices[j] for j in [0, 1, 2, 3]],
             [vertices[j] for j in [4, 5, 6, 7]]]
    
    # Draw the truck body
    ax.add_collection3d(Poly3DCollection(faces, facecolors='cyan', linewidths=1, edgecolors='r', alpha=.25))

    # Truck's wheels (as simple circles)
    wheel_radius = 0.5
    wheel_thickness = 0.2
    wheel_positions = [(0.5, 0.2, -wheel_radius), (0.5, 1.8, -wheel_radius),
                       (3.5, 0.2, -wheel_radius), (3.5, 1.8, -wheel_radius)]
    
    for (x, y, z) in wheel_positions:
        u, v = np.mgrid[0:2*np.pi:30j, 0:np.pi:15j]
        x_wheel = x + wheel_radius * np.cos(u) * np.sin(v)
        y_wheel = y + wheel_radius * np.sin(u) * np.sin(v)
        z_wheel = z + wheel_thickness * np.cos(v)
        ax.plot_surface(x_wheel, y_wheel, z_wheel, color='black')

    # Cabin for the truck
    cabin_vertices = np.array([[2, 0, 1.5], [4, 0, 1.5], [4, 2, 1.5], [2, 2, 1.5],
                               [2, 0, 2.5], [4, 0, 2.5], [4, 2, 2.5], [2, 2, 2.5]])
    
    cabin_faces = [[cabin_vertices[j] for j in [0, 1, 5, 4]],
                   [cabin_vertices[j] for j in [1, 2, 6, 5]],
                   [cabin_vertices[j] for j in [2, 3, 7, 6]],
                   [cabin_vertices[j] for j in [3, 0, 4, 7]],
                   [cabin_vertices[j] for j in [0, 1, 2, 3]],
                   [cabin_vertices[j] for j in [4, 5, 6, 7]]]
    
    ax.add_collection3d(Poly3DCollection(cabin_faces, facecolors='gray', linewidths=1, edgecolors='r', alpha=.75))

def main():
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    
    create_truck(ax)
    
    # Set plot limits
    ax.set_xlim([-1, 5])
    ax.set_ylim([-1, 3])
    ax.set_zlim([-1, 3])
    
    # Label axes
    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.set_zlabel('Z')
    
    # Show plot
    plt.show()

if __name__ == "__main__":
    main()
