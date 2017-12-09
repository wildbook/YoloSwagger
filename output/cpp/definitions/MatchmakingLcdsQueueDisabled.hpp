#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDisabled_t {
    std::string reasonFailed;
    std::string message;
    MatchmakingLcdsSummoner_t summoner;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDisabled_t& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["message"] = v.message;
    j["summoner"] = v.summoner;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDisabled_t& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueDisabled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
