#pragma once
#include <json.hpp>
#include <optional>
#include "RankedScoutingTopChampionDTO.hpp"
namespace leagueapi {
  struct RankedScoutingMemberDTO_t {
    std::vector<RankedScoutingTopChampionDTO_t> championScoutingData;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingMemberDTO_t& v) {
    j["championScoutingData"] = v.championScoutingData;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingMemberDTO_t& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<RankedScoutingTopChampionDTO_t>>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
