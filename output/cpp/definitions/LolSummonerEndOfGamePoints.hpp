#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerEndOfGamePoints_t {
    uint64_t pointsUntilNextReroll;
    uint64_t totalPoints;
    uint32_t rerollCount;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerEndOfGamePoints_t& v) {
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["totalPoints"] = v.totalPoints;
    j["rerollCount"] = v.rerollCount;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerEndOfGamePoints_t& v) {
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<uint64_t>();
    v.totalPoints = j.at("totalPoints").get<uint64_t>();
    v.rerollCount = j.at("rerollCount").get<uint32_t>();
  }
  inline std::string to_string(const LolSummonerEndOfGamePoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
