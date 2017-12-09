#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingMatchmakingLowPriorityData_t {
    std::vector<uint64_t> penalizedSummonerIds;
    std::string bustedLeaverAccessToken;
    double penaltyTime;
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingLowPriorityData_t& v) {
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingLowPriorityData_t& v) {
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingLowPriorityData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
