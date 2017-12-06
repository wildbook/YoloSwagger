#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryMini_t {
    int32_t championId;
    uint64_t playerId;
    int64_t championLevel;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryMini_t& v) {
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["championLevel"] = v.championLevel;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryMini_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championLevel = j.at("championLevel").get<int64_t>();
  }
}
