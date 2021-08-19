R

############ variables ############


sun_mass = 1.989 * 10^30
mercury_mass = 3.285 * 10^23
grav_const = 6.67408 * 10^-11
distance = 58.259 * 1000000

n_reps = 1000

time_step = 86400

initial_mercury_velocity = 47.36 * 1000

initial_mercury_x = 0
initial_mercury_y = distance

############ functions ############

calc_force = function(G, m1, m2, d) return((G*m1*m2)/(d*d))


########### results ###############

x_coords = rep(NA, n_reps)
y_coords = rep(NA, n_reps)
x_velocity = rep(NA, n_reps)
y_velocity = rep(NA, n_reps)



############ iterations ############

force = calc_force(grav_const, mercury_mass, sun_mass, distance)
acceleration = force / mercury_mass

x_velocity[1] = initial_mercury_velocity
y_velocity[1] = 0 + (acceleration * time_step)

x_coords[1] = initial_mercury_x
y_coords[1] = initial_mercury_y


for (i in 2:n_reps) {

	resultant_force = sqrt(v1^2 + v2^2)

	distance_x = (x_velocity[i-1] * time_step)
	distance_x = (y_velocity[i-1] * time_step)
	
	x_coords[i] = x_coords[i-1] + distance_x
	y_coords[i] = y_coords[i-1] + distance_y

	

}