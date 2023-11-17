//
// Created by ryousuke kaga on 2023/11/17.
//

#include "Particle.h"

void Particle::integrate(double duration) {
    position += velocity * duration;
    velocity += acceleration * duration;

    Vector3 acc = forceAccum * duration;
    velocity += acc * duration;

    velocity *= pow(damping, duration);
}
