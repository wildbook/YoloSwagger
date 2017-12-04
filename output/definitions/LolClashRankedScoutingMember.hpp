#ifndef SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
#define SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
#include <json.hpp>
#include "LolClashRankedScoutingTopChampion.hpp"
namespace test {
  // 
  struct LolClashRankedScoutingMember {
'    // 
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const LolClashRankedScoutingMember& v) {
    j["championScoutingData"] = v.championScoutingData;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, LolClashRankedScoutingMember& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRankedScoutingMember_HPP
