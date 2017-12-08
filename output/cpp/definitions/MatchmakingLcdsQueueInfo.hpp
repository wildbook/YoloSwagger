#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsQueueInfo_t {
    uint64_t_t waitTime;
    int32_t_t queueId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueInfo_t& v) {
    j["waitTime"] = v.waitTime;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueInfo_t& v) {
    v.waitTime = j.at("waitTime").get<uint64_t_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
