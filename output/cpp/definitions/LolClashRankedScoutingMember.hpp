#ifndef SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
#define SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
#include <json.hpp>
#include "LolClashRankedScoutingTopChampion.hpp"
namespace leagueapi {
  // 
  struct LolClashRankedScoutingMember {
    // 
    uint64_t playerId;
    // 
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingMember& v) {
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingMember& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>;
  }

}
#endif // SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
