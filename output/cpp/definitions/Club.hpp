#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Club_t {
    std::string name;
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const Club_t& v) {
    j["name"] = v.name;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, Club_t& v) {
    v.name = j.at("name").get<std::string>();
    v.key = j.at("key").get<std::string>();
  }
  inline std::string to_string(const Club_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
