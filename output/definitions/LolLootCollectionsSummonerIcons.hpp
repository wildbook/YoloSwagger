#ifndef SWAGGER_TYPES_LolLootCollectionsSummonerIcons_HPP
#define SWAGGER_TYPES_LolLootCollectionsSummonerIcons_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootCollectionsSummonerIcons {
    // 
    std::vector<int32_t> icons;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsSummonerIcons& v) {
    j["icons"] = v.icons;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsSummonerIcons& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsSummonerIcons_HPP
