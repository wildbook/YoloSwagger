#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BracketRoster_t {
    std::string name;
    int32_t logoColor;
    int32_t logo;
    std::string shortName;
    int64_t rosterId;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster_t& v) {
    j["name"] = v.name;
    j["logoColor"] = v.logoColor;
    j["logo"] = v.logo;
    j["shortName"] = v.shortName;
    j["rosterId"] = v.rosterId;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster_t& v) {
    v.name = j.at("name").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.rosterId = j.at("rosterId").get<int64_t>();
  }
  inline std::string to_string(const BracketRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
