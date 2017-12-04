#ifndef SWAGGER_TYPES_LolClashRosterDetails_HPP
#define SWAGGER_TYPES_LolClashRosterDetails_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRosterDetails {
    // 
    int32_t iconColorId;
    // 
    int32_t iconId;
    // 
    std::string shortName;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDetails& v) {
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
    j["shortName"] = v.shortName;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDetails& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.iconId = j.at("iconId").get<int32_t>;
    v.shortName = j.at("shortName").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterDetails_HPP