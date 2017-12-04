#ifndef SWAGGER_TYPES_PlayerPreferences_HPP
#define SWAGGER_TYPES_PlayerPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerPreferences {
    // 
    std::string hash;
    // 
    std::string version;
    // 
    std::string data;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferences& v) {
    j["hash"] = v.hash;
    j["version"] = v.version;
    j["data"] = v.data;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>;
    v.version = j.at("version").get<std::string>;
    v.data = j.at("data").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerPreferences_HPP
