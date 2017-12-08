#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectAction_t {
    int64_t actorCellId;
    bool completed;
    std::string type;
    int64_t id;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectAction_t& v) {
    j["actorCellId"] = v.actorCellId;
    j["completed"] = v.completed;
    j["type"] = v.type;
    j["id"] = v.id;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectAction_t& v) {
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.completed = j.at("completed").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
