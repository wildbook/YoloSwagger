#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectAction_t {
    int32_t championId;
    bool completed;
    int64_t id;
    std::string type;
    int64_t actorCellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectAction_t& v) {
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["type"] = v.type;
    j["actorCellId"] = v.actorCellId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectAction_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.completed = j.at("completed").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
  }
}
