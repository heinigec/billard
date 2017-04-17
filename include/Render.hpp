#pragma once

#include <Eigen/Dense>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Ball.hpp"

using namespace Eigen;
using namespace std;

class Render {
 private:
  Vector3d camera_position;
  double camera_angle;
  Vector3d camera_look_at;

  vector<Ball> balls;

 public:
  Render();
  void set_camera(const Vector3d& camera_position, double camera_angle,
                  const Vector3d& camera_look_at);
  void add_ball(Ball ball);
  string render_scene(void);

 private:
  string render_light();
  string render_camera();
  string render_balls();

  static string render_Vector3d(const Vector3d& vec) {
    stringstream vect;
    vect << "<" << vec[0] << "," << vec[1] << "," << vec[2] << ">";
    return vect.str();
  }
};
