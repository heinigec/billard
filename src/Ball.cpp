#include <Ball.hpp>

Ball::Ball(double radius, const Vector3d& position, const Vector3d& velocity)
    : radius(radius), position(position), velocity(velocity) {}

double Ball::getRadius() { return this->radius; }

const Vector3d& Ball::getPosition() { return this->position; }

const Vector3d& Ball::getVelocity() { return this->velocity; }
