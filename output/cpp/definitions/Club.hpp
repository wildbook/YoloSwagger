#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Club_t {
    std::string_t name;
    std::string_t key;
  };

  inline void to_json(nlohmann::json& j, const Club_t& v) {
    j["name"] = v.name;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, Club_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.key = j.at("key").get<std::string_t>();
  }
  inline std::string to_string(const Club_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
