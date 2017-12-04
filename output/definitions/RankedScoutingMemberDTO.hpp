#ifndef SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
#define SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
#include <json.hpp>
#include "RankedScoutingTopChampionDTO.hpp"
namespace leagueapi {
  // 
  struct RankedScoutingMemberDTO {
    // 
    std::vector<RankedScoutingTopChampionDTO> championScoutingData;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const RankedScoutingMemberDTO& v) {
    j["championScoutingData"] = v.championScoutingData;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, RankedScoutingMemberDTO& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
