#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderActionV1_t {
    bool completed;
    int32_t actorCellId;
    std::string type;
    int32_t championId;
    int32_t actionId;
    int64_t duration;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderActionV1_t& v) {
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
    j["type"] = v.type;
    j["championId"] = v.championId;
    j["actionId"] = v.actionId;
    j["duration"] = v.duration;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderActionV1_t& v) {
    v.completed = j.at("completed").get<bool>();
    v.actorCellId = j.at("actorCellId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.actionId = j.at("actionId").get<int32_t>();
    v.duration = j.at("duration").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderActionV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
