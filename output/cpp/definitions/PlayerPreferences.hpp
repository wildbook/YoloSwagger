#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferences_t {
    std::string hash;
    std::string version;
    std::string data;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferences_t& v) {
    j["hash"] = v.hash;
    j["version"] = v.version;
    j["data"] = v.data;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferences_t& v) {
    v.hash = j.at("hash").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.data = j.at("data").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const PlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
