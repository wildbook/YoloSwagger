#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGatekeeperRestrictionDto_t {
    uint64_t accountId;
    int32_t queueId;
    int64_t remainingMillis;
    std::string payload;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGatekeeperRestrictionDto_t& v) {
    j["accountId"] = v.accountId;
    j["queueId"] = v.queueId;
    j["remainingMillis"] = v.remainingMillis;
    j["payload"] = v.payload;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGatekeeperRestrictionDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.payload = j.at("payload").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
  }
}
