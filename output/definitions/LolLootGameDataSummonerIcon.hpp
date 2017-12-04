#ifndef SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
#define SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootGameDataSummonerIcon {
    // 
    std::string iconPath;
    // 
    int32_t id;
  };

  void to_json(nlohmann::json& j, const LolLootGameDataSummonerIcon& v) {
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
  }

  void from_json(const nlohmann::json& j, LolLootGameDataSummonerIcon& v) {
    v.iconPath = j.at("iconPath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootGameDataSummonerIcon_HPP
