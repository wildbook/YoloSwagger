#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueRestricted_t {
    std::string message;
    std::string reasonFailed;
    int32_t queueId;
    MatchmakingLcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueRestricted_t& v) {
    j["message"] = v.message;
    j["reasonFailed"] = v.reasonFailed;
    j["queueId"] = v.queueId;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueRestricted_t& v) {
    v.message = j.at("message").get<std::string>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
  }
}
