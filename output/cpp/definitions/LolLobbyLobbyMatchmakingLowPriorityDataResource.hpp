#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource_t {
    std::string bustedLeaverAccessToken;
    double penaltyTime;
    double penaltyTimeRemaining;
    std::vector<uint64_t> penalizedSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
