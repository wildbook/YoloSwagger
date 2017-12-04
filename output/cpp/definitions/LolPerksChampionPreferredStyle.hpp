#ifndef SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
#define SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampionPreferredStyle {
    // 
    std::string championName;
    // 
    int32_t style;
    // 
    uint32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampionPreferredStyle& v) {
    j["championName"] = v.championName;
    j["style"] = v.style;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampionPreferredStyle& v) {
    v.championName = j.at("championName").get<std::string>;
    v.style = j.at("style").get<int32_t>;
    v.championId = j.at("championId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
