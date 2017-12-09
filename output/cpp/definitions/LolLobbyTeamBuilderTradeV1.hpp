#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTradeV1_t {
    std::string state;
    int32_t id;
    int32_t cellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTradeV1_t& v) {
    j["state"] = v.state;
    j["id"] = v.id;
    j["cellId"] = v.cellId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTradeV1_t& v) {
    v.state = j.at("state").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.cellId = j.at("cellId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTradeV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
