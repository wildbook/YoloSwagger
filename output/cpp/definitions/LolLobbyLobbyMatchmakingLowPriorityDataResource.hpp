#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource_t {
    std::string bustedLeaverAccessToken;
    std::vector<uint64_t> penalizedSummonerIds;
    double penaltyTime;
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
  }
}
