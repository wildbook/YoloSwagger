#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTradeV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTradeV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTradeV1 {
    // 
    int32_t cellId;
    // 
    int32_t id;
    // 
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTradeV1& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTradeV1& v) {
    v.cellId = j.at("cellId").get<int32_t>;
    v.id = j.at("id").get<int32_t>;
    v.state = j.at("state").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTradeV1_HPP
