#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    std::string reason;
    std::string payload;
    std::string summonerName;
    int64_t remainingMillis;
    int32_t queueId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["reason"] = v.reason;
    j["payload"] = v.payload;
    j["summonerName"] = v.summonerName;
    j["remainingMillis"] = v.remainingMillis;
    j["queueId"] = v.queueId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
