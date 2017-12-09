#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Club_t {
    std::string key;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const Club_t& v) {
    j["key"] = v.key;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, Club_t& v) {
    v.key = j.at("key").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const Club_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
