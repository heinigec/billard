#include <Ball.hpp>
#include <Eigen/Dense>
#include <Render.hpp>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(void) {
  double radius = 1.0;
  Vector3d position(0, 0, 0);
  Vector3d velocity(0, 0, 0);
  Ball ball(radius, position, velocity);
  Render render;
  render.set_camera(Vector3d(0.0, 3, -10.0), 45, Vector3d(0.0, 0.0, 0.0));
  render.add_ball(ball);
  cout << render.render_scene() << endl;
  return 0;
}
