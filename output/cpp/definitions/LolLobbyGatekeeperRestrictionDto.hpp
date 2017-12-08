#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGatekeeperRestrictionDto_t {
    int64_t_t remainingMillis;
    int32_t_t queueId;
    std::string_t reason;
    std::string_t payload;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGatekeeperRestrictionDto_t& v) {
    j["remainingMillis"] = v.remainingMillis;
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["payload"] = v.payload;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGatekeeperRestrictionDto_t& v) {
    v.remainingMillis = j.at("remainingMillis").get<int64_t_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.reason = j.at("reason").get<std::string_t>();
    v.payload = j.at("payload").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyGatekeeperRestrictionDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
