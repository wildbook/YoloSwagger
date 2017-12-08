#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryMini_t {
    int64_t championLevel;
    uint64_t playerId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryMini_t& v) {
    j["championLevel"] = v.championLevel;
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryMini_t& v) {
    v.championLevel = j.at("championLevel").get<int64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryMini_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
