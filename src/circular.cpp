#include "nbody.h"
#include <utility>
#include <vector>

#define SUN_GRAV 6.67408 
#define DISTANCE 4534543
#define initial_mercury_velocity 32423


void init() {
	Particle Mercury;
	Mercury.mass = 12;
	Particle Sun;
	Sun.mass = 100;
}

void return_velocity(int n_reps, Particle planet_1, Particle planet_2) {
	
	planet_1.mass = 100;
	planet_2.mass = 10;

	std::vector<double> x_coords(n_reps);
	std::vector<double> y_coords(n_reps);
	std::vector<double> x_velocity(n_reps);
	std::vector<double> y_velocity(n_reps);

	double force = calc_force(SUN_GRAV, planet_1.mass, planet_2.mass, DISTANCE);
	double acceleration = force / planet_2.mass;

	x_coords[1] = 2.2;

	x_velocity[1] = initial_mercury_velocity
	y_velocity[1] = 0 + (acceleration * time_step)

	for (int i=0; i<n_reps; i++) {
		
	}


}


double calc_force(double G, double m1, double m2, double d) {
	double return_force = (G*m1*m2)/(d*d);
	return(return_force);
}
