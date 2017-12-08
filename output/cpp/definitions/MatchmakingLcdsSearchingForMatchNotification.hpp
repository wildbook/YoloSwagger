#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsQueueInfo.hpp"
namespace leagueapi {
  struct MatchmakingLcdsSearchingForMatchNotification_t {
    std::vector<nlohmann::json> playerJoinFailures;
    std::vector<MatchmakingLcdsQueueInfo_t> joinedQueues;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsSearchingForMatchNotification_t& v) {
    j["playerJoinFailures"] = v.playerJoinFailures;
    j["joinedQueues"] = v.joinedQueues;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsSearchingForMatchNotification_t& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>();
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo_t>>();
  }
  inline std::string to_string(const MatchmakingLcdsSearchingForMatchNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
