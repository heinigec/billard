#include <Ball.hpp>
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(void) {
  double radius = 1.0;
  Vector3d position(1, 2, 3);
  Vector3d velocity(0, 0, 0);
  Ball ball(radius, position, velocity);
  const Vector3d& pos = ball.getPosition();

  cout << pos << endl;

  return 0;
}
