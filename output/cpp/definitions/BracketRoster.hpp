#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BracketRoster_t {
    int32_t logo;
    int64_t rosterId;
    std::string name;
    std::string shortName;
    int32_t logoColor;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster_t& v) {
    j["logo"] = v.logo;
    j["rosterId"] = v.rosterId;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster_t& v) {
    v.logo = j.at("logo").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
  }
  inline std::string to_string(const BracketRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
