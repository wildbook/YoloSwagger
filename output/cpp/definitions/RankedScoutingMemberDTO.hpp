#pragma once
#include <json.hpp>
#include <optional>
#include "RankedScoutingTopChampionDTO.hpp"
namespace leagueapi {
  struct RankedScoutingMemberDTO_t {
    uint64_t playerId;
    std::vector<RankedScoutingTopChampionDTO_t> championScoutingData;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingMemberDTO_t& v) {
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingMemberDTO_t& v) {
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO_t>>();
  }
}
