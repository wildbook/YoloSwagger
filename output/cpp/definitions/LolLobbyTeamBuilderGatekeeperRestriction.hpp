#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestriction_t {
    int32_t queueId;
    uint32_t remainingMillis;
    uint64_t summonerId;
    std::string payload;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    j["queueId"] = v.queueId;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
    j["payload"] = v.payload;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.payload = j.at("payload").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
  }
}
