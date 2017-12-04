#ifndef SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
#define SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampionPreferredStyle {
    // 
    uint32_t championId;
    // 
    std::string championName;
    // 
    int32_t style;
  };

  void to_json(nlohmann::json& j, const LolPerksChampionPreferredStyle& v) {
    j["championId"] = v.championId;
    j["championName"] = v.championName;
    j["style"] = v.style;
  }

  void from_json(const nlohmann::json& j, LolPerksChampionPreferredStyle& v) {
    v.championId = j.at("championId").get<uint32_t>;
    v.championName = j.at("championName").get<std::string>;
    v.style = j.at("style").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampionPreferredStyle_HPP
