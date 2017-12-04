#ifndef SWAGGER_TYPES_CollectionsLcdsSummonerRuneInventory_HPP
#define SWAGGER_TYPES_CollectionsLcdsSummonerRuneInventory_HPP
#include <json.hpp>
#include "CollectionsLcdsSummonerRune.hpp"
namespace leagueapi {
  // 
  struct CollectionsLcdsSummonerRuneInventory {
    // 
    std::string dateString;
    // 
    uint64_t summonerId;
    // 
    std::vector<CollectionsLcdsSummonerRune> summonerRunes;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory& v) {
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
    j["summonerRunes"] = v.summonerRunes;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory& v) {
    v.dateString = j.at("dateString").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSummonerRuneInventory_HPP
