#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueThrottled_t {
    std::string reasonFailed;
    MatchmakingLcdsSummoner_t summoner;
    int32_t queueId;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueThrottled_t& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
    j["queueId"] = v.queueId;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueThrottled_t& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueThrottled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
