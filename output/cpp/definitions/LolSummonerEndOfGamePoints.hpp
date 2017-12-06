#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerEndOfGamePoints_t {
    uint64_t totalPoints;
    uint64_t pointsUntilNextReroll;
    uint32_t rerollCount;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerEndOfGamePoints_t& v) {
    j["totalPoints"] = v.totalPoints;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["rerollCount"] = v.rerollCount;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerEndOfGamePoints_t& v) {
    v.totalPoints = j.at("totalPoints").get<uint64_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<uint64_t>();
    v.rerollCount = j.at("rerollCount").get<uint32_t>();
  }
}
