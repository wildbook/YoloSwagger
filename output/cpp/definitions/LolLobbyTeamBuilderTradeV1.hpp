#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTradeV1_t {
    int32_t id;
    int32_t cellId;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTradeV1_t& v) {
    j["id"] = v.id;
    j["cellId"] = v.cellId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTradeV1_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.cellId = j.at("cellId").get<int32_t>();
    v.state = j.at("state").get<std::string>();
  }
}
