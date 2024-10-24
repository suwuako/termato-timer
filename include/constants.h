#define GRAVITATIONAL_ACCELERATION 9.8
#define MIN_INITIAL_ACCELERATION 0.5
#define MAX_INITIAL_ACCELERATION 2.5
#define COLLISION_FRICTION_PERCENT 5
#define AIR_FRICTION_PERCENT 0.5

typedef struct vector_2d
{
    double x;
    double y;
} vector;

// the tomato object that bounces around
typedef struct tomato_physics_object
{
    int radius;
    double mass;
    vector position_vec;
    vector velocity_vec;
    vector acceleration_vec;
} tomato_body;

