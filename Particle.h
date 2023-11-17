//
// Created by ryousuke kaga on 2023/11/17.
//

#ifndef PHYSICS_ENGINE_IN_CPP_PARTICLE_H
#define PHYSICS_ENGINE_IN_CPP_PARTICLE_H

#include "Vector3.h"

class Particle {
public:
    Vector3 forceAccum;
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    double damping;
    /**
     * It's more useful to hold the inverse mass becuase integration is simpler and
     * because in real-time simulation it is more useful to have objects with infinite mass than zero mass
     */
    double inverseMass;

    void integrate(double duration);
};


#endif //PHYSICS_ENGINE_IN_CPP_PARTICLE_H
