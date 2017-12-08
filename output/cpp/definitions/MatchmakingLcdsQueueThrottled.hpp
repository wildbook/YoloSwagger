#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueThrottled_t {
    MatchmakingLcdsSummoner_t summoner;
    int32_t queueId;
    std::string message;
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueThrottled_t& v) {
    j["summoner"] = v.summoner;
    j["queueId"] = v.queueId;
    j["message"] = v.message;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueThrottled_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.message = j.at("message").get<std::string>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueThrottled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
