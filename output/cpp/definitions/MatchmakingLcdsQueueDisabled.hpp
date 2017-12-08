#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDisabled_t {
    MatchmakingLcdsSummoner_t summoner;
    int32_t_t queueId;
    std::string_t message;
    std::string_t reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDisabled_t& v) {
    j["summoner"] = v.summoner;
    j["queueId"] = v.queueId;
    j["message"] = v.message;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDisabled_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.message = j.at("message").get<std::string_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueDisabled_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
