#ifndef SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
#define SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootGameDataSummonerEmote {
    // 
    std::string inventoryIcon;
    // 
    std::string description;
    // 
    std::string name;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote& v) {
    j["inventoryIcon"] = v.inventoryIcon;
    j["description"] = v.description;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote& v) {
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
