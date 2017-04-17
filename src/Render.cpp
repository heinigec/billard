#include <Render.hpp>

Render::Render()
    : camera_position(Vector3d(0, 0, 0)),
      camera_angle(0),
      camera_look_at(Vector3d(0, 0, 0)) {}

void Render::set_camera(const Vector3d& camera_position, double camera_angle,
                        const Vector3d& camera_look_at) {
  this->camera_position = camera_position;
  this->camera_angle = camera_angle;
  this->camera_look_at = camera_look_at;
}

void Render::add_ball(Ball ball) { this->balls.push_back(ball); }

string Render::render_scene(void) {
  std::stringstream scene;
  scene << "#version 3.6;" << endl;
  scene << "global_settings{ assumed_gamma 1.0 }" << endl;
  scene << "default{ finish{ ambient 0.2 diffuse 0.8 }}" << endl;
  scene << "#include \"colors.inc\"" << endl;
  scene << this->render_light() << endl << endl;
  scene << this->render_camera() << endl << endl;
  scene << this->render_balls() << endl << endl;
  return scene.str();
}

string Render::render_light() {
  return "light_source{<1500,2500,-2500> color White}";
}

string Render::render_camera() {
  stringstream camera;
  camera << "#declare Cam0 =camera {ultra_wide_angle angle "
         << this->camera_angle << endl;
  camera << "location " << Render::render_Vector3d(this->camera_position)
         << endl;
  camera << "right x*image_width/image_height" << endl;
  camera << "look_at " << Render::render_Vector3d(this->camera_look_at) << "}"
         << endl;
  camera << "camera{Cam0}" << endl;
  return camera.str();
}

string Render::render_balls() {
  stringstream balls;
  for (unsigned int i = 0; i < this->balls.size(); i++) {
    Ball& ball = this->balls[i];
    balls << "sphere{ " + Render::render_Vector3d(ball.getPosition()) << ","
          << ball.getRadius() << endl;
    balls << "  pigment{ image_map{gif "
             "\"../rendering/images/ball_yellow_half.gif\" map_type 1 once} }"
          << endl;
    balls << "}";
  }
  return balls.str();
}
