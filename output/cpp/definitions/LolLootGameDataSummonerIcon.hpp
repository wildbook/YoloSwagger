#ifndef SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
#define SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootGameDataSummonerIcon {
    // 
    int32_t id;
    // 
    std::string iconPath;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerIcon& v) {
    j["id"] = v.id;
    j["iconPath"] = v.iconPath;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerIcon& v) {
    v.id = j.at("id").get<int32_t>;
    v.iconPath = j.at("iconPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
