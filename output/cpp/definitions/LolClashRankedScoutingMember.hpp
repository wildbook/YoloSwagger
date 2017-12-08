#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRankedScoutingTopChampion.hpp"
namespace leagueapi {
  struct LolClashRankedScoutingMember_t {
    uint64_t_t playerId;
    std::vector<LolClashRankedScoutingTopChampion_t> championScoutingData;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingMember_t& v) {
    j["playerId"] = v.playerId;
    j["championScoutingData"] = v.championScoutingData;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingMember_t& v) {
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion_t>>();
  }
  inline std::string to_string(const LolClashRankedScoutingMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
