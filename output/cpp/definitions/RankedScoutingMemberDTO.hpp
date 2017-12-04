#ifndef SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
#define SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
#include <json.hpp>
#include "RankedScoutingTopChampionDTO.hpp"
namespace leagueapi {
  // 
  struct RankedScoutingMemberDTO {
    // 
    uint64_t playerId;
    // 
    std::vector<RankedScoutingTopChampionDTO> championScoutingData;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingMemberDTO& v) {
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingMemberDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO>>;
  }

}
#endif // SWAGGER_TYPES_RankedScoutingMemberDTO_HPP
