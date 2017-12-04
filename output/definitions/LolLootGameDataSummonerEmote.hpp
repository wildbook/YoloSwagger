#ifndef SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
#define SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLootGameDataSummonerEmote {
'    // 
    std::string description;
    // 
    int64_t id;
    // 
    std::string inventoryIcon;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["inventoryIcon"] = v.inventoryIcon;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote& v) {
    v.description = j.at("description").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootGameDataSummonerEmote_HPP
