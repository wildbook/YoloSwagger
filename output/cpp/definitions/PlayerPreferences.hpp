#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferences_t {
    std::string version;
    std::string hash;
    std::string type;
    std::string data;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferences_t& v) {
    j["version"] = v.version;
    j["hash"] = v.hash;
    j["type"] = v.type;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferences_t& v) {
    v.version = j.at("version").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::string>();
  }
  inline std::string to_string(const PlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
