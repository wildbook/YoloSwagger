#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BracketRoster_t {
    std::string_t shortName;
    int32_t_t logo;
    int64_t_t rosterId;
    int32_t_t logoColor;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster_t& v) {
    j["shortName"] = v.shortName;
    j["logo"] = v.logo;
    j["rosterId"] = v.rosterId;
    j["logoColor"] = v.logoColor;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster_t& v) {
    v.shortName = j.at("shortName").get<std::string_t>();
    v.logo = j.at("logo").get<int32_t_t>();
    v.rosterId = j.at("rosterId").get<int64_t_t>();
    v.logoColor = j.at("logoColor").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const BracketRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
