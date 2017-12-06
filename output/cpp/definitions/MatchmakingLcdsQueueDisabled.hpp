#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDisabled_t {
    std::string message;
    int32_t queueId;
    std::string reasonFailed;
    MatchmakingLcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDisabled_t& v) {
    j["message"] = v.message;
    j["queueId"] = v.queueId;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDisabled_t& v) {
    v.message = j.at("message").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
  }
}
