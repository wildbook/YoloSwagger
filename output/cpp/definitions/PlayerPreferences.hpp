#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferences_t {
    std::string data;
    std::string hash;
    std::string type;
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferences_t& v) {
    j["data"] = v.data;
    j["hash"] = v.hash;
    j["type"] = v.type;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferences_t& v) {
    v.data = j.at("data").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.version = j.at("version").get<std::string>();
  }
}
