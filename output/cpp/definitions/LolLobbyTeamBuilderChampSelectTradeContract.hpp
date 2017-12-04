#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectTradeContract {
    // 
    LolLobbyTeamBuilderChampSelectTradeState state;
    // 
    int64_t cellId;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) {
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>;
    v.cellId = j.at("cellId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeContract_HPP
