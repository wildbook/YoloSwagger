#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectTradeContract_t {
    LolLobbyTeamBuilderChampSelectTradeState_t state;
    int64_t_t cellId;
    int64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeContract_t& v) {
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeContract_t& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState_t>();
    v.cellId = j.at("cellId").get<int64_t_t>();
    v.id = j.at("id").get<int64_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectTradeContract_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
