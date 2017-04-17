#include <Eigen/Dense>

using namespace Eigen;

class Ball {
 private:
  double radius;
  Vector3d position;
  Vector3d velocity;

 public:
  Ball(double radius, const Vector3d& position, const Vector3d& velocity);
  double getRadius();
  const Vector3d& getPosition();
  const Vector3d& getVelocity();
};
