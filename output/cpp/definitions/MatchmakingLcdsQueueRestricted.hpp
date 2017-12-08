#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueRestricted_t {
    int32_t queueId;
    std::string reasonFailed;
    std::string message;
    MatchmakingLcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueRestricted_t& v) {
    j["queueId"] = v.queueId;
    j["reasonFailed"] = v.reasonFailed;
    j["message"] = v.message;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueRestricted_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueRestricted_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
