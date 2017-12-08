#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRankedScoutingTopChampion.hpp"
namespace leagueapi {
  struct LolClashRankedScoutingMember_t {
    std::vector<LolClashRankedScoutingTopChampion_t> championScoutingData;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingMember_t& v) {
    j["championScoutingData"] = v.championScoutingData;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingMember_t& v) {
    v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion_t>>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRankedScoutingMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
