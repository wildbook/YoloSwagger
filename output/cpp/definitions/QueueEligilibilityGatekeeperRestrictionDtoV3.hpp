#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    int64_t remainingMillis;
    std::string reason;
    uint64_t summonerId;
    std::string payload;
    std::string summonerName;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["remainingMillis"] = v.remainingMillis;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["payload"] = v.payload;
    j["summonerName"] = v.summonerName;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.payload = j.at("payload").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
