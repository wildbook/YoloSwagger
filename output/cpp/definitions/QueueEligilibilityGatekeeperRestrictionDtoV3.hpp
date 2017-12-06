#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    std::string payload;
    int32_t queueId;
    std::string reason;
    int64_t remainingMillis;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["payload"] = v.payload;
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.reason = j.at("reason").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
