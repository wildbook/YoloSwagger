#ifndef SWAGGER_TYPES_PlayerPreferences_HPP
#define SWAGGER_TYPES_PlayerPreferences_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerPreferences {
'    // 
    std::string data;
    // 
    std::string hash;
    // 
    std::string type;
    // 
    std::string version;
  };

  void to_json(nlohmann::json& j, const PlayerPreferences& v) {
    j["data"] = v.data;
    j["hash"] = v.hash;
    j["type"] = v.type;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, PlayerPreferences& v) {
    v.data = j.at("data").get<std::string>;
    v.hash = j.at("hash").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerPreferences_HPP
