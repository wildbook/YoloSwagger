#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryMini_t {
    int32_t championId;
    int64_t championLevel;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryMini_t& v) {
    j["championId"] = v.championId;
    j["championLevel"] = v.championLevel;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryMini_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.championLevel = j.at("championLevel").get<int64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
