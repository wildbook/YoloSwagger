#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTradeV1_t {
    int32_t cellId;
    int32_t id;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTradeV1_t& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTradeV1_t& v) {
    v.cellId = j.at("cellId").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.state = j.at("state").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTradeV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
