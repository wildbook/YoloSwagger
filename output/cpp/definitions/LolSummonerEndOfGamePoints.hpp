#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerEndOfGamePoints_t {
    uint32_t_t rerollCount;
    uint64_t_t totalPoints;
    uint64_t_t pointsUntilNextReroll;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerEndOfGamePoints_t& v) {
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerEndOfGamePoints_t& v) {
    v.rerollCount = j.at("rerollCount").get<uint32_t_t>();
    v.totalPoints = j.at("totalPoints").get<uint64_t_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<uint64_t_t>();
  }
  inline std::string to_string(const LolSummonerEndOfGamePoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
