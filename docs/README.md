# physics-engine

## settings/units
we are using SI units (easiser) and for rendering and deciding what happens each second,
we're gonna run calculations like minecraft (20 ticks per second, all calculations done 
per tick)

## Rundown

heres quick rundown of the physics engine - whenever a tomato is initialised, it is assigned
an initial force defined in [constants.h](include/constants.h). They will also be affected
by a constant gravitational force defined in [constants.h](../include/constants.h). When two
tomatos collide, it checks for multiple factors:

0. if one tomato has a higher mass than the other (due to being larger for more time studied),
then the it will result in an inelastic collision, where we kinda fuse the two tomatos together
using conservation of momentum
1. if the two tomatos are of similar size (or within a margin of error (i.e. .5 kg or something)
AND the two tomatos' direction vector are also within a certain margin (i.e. 5 degrees or sum)
then we also preform an inelastic collision
2. otherwise, we preform an elastic collision

note that to calculate inelastic, you use:
```
m_1 v_1 + m_2 v_2  = (m_1 + m_2) v_f
```

and for elastic collisions, you take thhe point of contact and 

all tomatos sohuld also have some sort of air-friction (just because) 
