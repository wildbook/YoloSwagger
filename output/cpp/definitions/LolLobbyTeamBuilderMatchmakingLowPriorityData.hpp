#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingLowPriorityData_t {
    std::string bustedLeaverAccessToken;
    double penaltyTimeRemaining;
    std::vector<uint64_t> penalizedSummonerIds;
    double penaltyTime;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.penaltyTime = j.at("penaltyTime").get<double>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
