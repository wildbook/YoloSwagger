#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectTradeContract_t {
    int64_t id;
    int64_t cellId;
    LolLobbyTeamBuilderChampSelectTradeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeContract_t& v) {
    j["id"] = v.id;
    j["cellId"] = v.cellId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeContract_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.cellId = j.at("cellId").get<int64_t>();
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState_t>();
  }
}
