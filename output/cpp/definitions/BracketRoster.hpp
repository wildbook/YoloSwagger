#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BracketRoster_t {
    int64_t rosterId;
    int32_t logo;
    int32_t logoColor;
    std::string shortName;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster_t& v) {
    j["rosterId"] = v.rosterId;
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const BracketRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
