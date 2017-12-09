#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingLowPriorityData_t {
    double penaltyTime;
    std::vector<uint64_t> penalizedSummonerIds;
    std::string bustedLeaverAccessToken;
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    j["penaltyTime"] = v.penaltyTime;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingLowPriorityData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
