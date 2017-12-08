#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCreatePremadeV1_t {
    int32_t_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCreatePremadeV1_t& v) {
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCreatePremadeV1_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCreatePremadeV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
