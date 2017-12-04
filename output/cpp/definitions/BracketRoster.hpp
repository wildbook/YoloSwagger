#ifndef SWAGGER_TYPES_BracketRoster_HPP
#define SWAGGER_TYPES_BracketRoster_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BracketRoster {
    // 
    std::string shortName;
    // 
    int32_t logo;
    // 
    int64_t rosterId;
    // 
    int32_t logoColor;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster& v) {
    j["shortName"] = v.shortName;
    j["logo"] = v.logo;
    j["rosterId"] = v.rosterId;
    j["logoColor"] = v.logoColor;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster& v) {
    v.shortName = j.at("shortName").get<std::string>;
    v.logo = j.at("logo").get<int32_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BracketRoster_HPP
