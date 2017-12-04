#ifndef SWAGGER_TYPES_BracketRoster_HPP
#define SWAGGER_TYPES_BracketRoster_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BracketRoster {
    // 
    int32_t logo;
    // 
    int32_t logoColor;
    // 
    std::string name;
    // 
    int64_t rosterId;
    // 
    std::string shortName;
  };

  inline void to_json(nlohmann::json& j, const BracketRoster& v) {
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["name"] = v.name;
    j["rosterId"] = v.rosterId;
    j["shortName"] = v.shortName;
  }

  inline void from_json(const nlohmann::json& j, BracketRoster& v) {
    v.logo = j.at("logo").get<int32_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.shortName = j.at("shortName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BracketRoster_HPP
