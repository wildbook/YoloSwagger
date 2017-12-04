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
    std::vector<CollectionsLcdsSummonerRune> summonerRunes;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRuneInventory& v) {
    j["dateString"] = v.dateString;
    j["summonerRunes"] = v.summonerRunes;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRuneInventory& v) {
    v.dateString = j.at("dateString").get<std::string>;
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSummonerRuneInventory_HPP
