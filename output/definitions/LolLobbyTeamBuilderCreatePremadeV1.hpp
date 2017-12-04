#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderCreatePremadeV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderCreatePremadeV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderCreatePremadeV1 {
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCreatePremadeV1& v) {
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCreatePremadeV1& v) {
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderCreatePremadeV1_HPP
