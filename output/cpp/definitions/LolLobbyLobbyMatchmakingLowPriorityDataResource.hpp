#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingLowPriorityDataResource_t {
    double penaltyTimeRemaining;
    std::vector<uint64_t> penalizedSummonerIds;
    double penaltyTime;
    std::string bustedLeaverAccessToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingLowPriorityDataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
