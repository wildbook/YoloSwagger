#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsQueueInfo.hpp"
namespace leagueapi {
  struct MatchmakingLcdsSearchingForMatchNotification_t {
    std::vector<MatchmakingLcdsQueueInfo_t> joinedQueues;
    std::vector<nlohmann::json> playerJoinFailures;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsSearchingForMatchNotification_t& v) {
    j["joinedQueues"] = v.joinedQueues;
    j["playerJoinFailures"] = v.playerJoinFailures;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsSearchingForMatchNotification_t& v) {
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo_t>>();
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>();
  }
}
