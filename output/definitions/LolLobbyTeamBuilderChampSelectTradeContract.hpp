#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectTradeContract {
    // 
    int64_t cellId;
    // 
    int64_t id;
    // 
    LolLobbyTeamBuilderChampSelectTradeState state;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) {
    v.cellId = j.at("cellId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
