#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsQueueInfo_t {
    int32_t queueId;
    uint64_t waitTime;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueInfo_t& v) {
    j["queueId"] = v.queueId;
    j["waitTime"] = v.waitTime;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueInfo_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.waitTime = j.at("waitTime").get<uint64_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
