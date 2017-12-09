#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestriction_t {
    uint64_t summonerId;
    std::string reason;
    std::string payload;
    uint32_t remainingMillis;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    j["summonerId"] = v.summonerId;
    j["reason"] = v.reason;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
