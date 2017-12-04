#ifndef SWAGGER_TYPES_LolGameSettingsgamesettingsgameclient_HPP
#define SWAGGER_TYPES_LolGameSettingsgamesettingsgameclient_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolGameSettingsgamesettingsgameclient {
'    // 
    bool running;
  };

  void to_json(nlohmann::json& j, const LolGameSettingsgamesettingsgameclient& v) {
    j["running"] = v.running;
  }

  void from_json(const nlohmann::json& j, LolGameSettingsgamesettingsgameclient& v) {
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameSettingsgamesettingsgameclient_HPP
