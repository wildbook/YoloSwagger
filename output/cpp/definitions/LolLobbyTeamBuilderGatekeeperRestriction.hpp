#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestriction_t {
    int32_t_t queueId;
    std::string_t reason;
    uint64_t_t summonerId;
    std::string_t payload;
    uint32_t_t remainingMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.reason = j.at("reason").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.payload = j.at("payload").get<std::string_t>();
    v.remainingMillis = j.at("remainingMillis").get<uint32_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
