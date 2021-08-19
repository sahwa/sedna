const int DIM = 2;
const double EPS = 1e-4;

inline double sqr(double);

struct Particle{
	double mass;
	double acceleration[DIM];
	double velocity[DIM];
	double force[DIM];
	double F_old[DIM];
};

double calc_force(double g, double m1, double m2, double d);

