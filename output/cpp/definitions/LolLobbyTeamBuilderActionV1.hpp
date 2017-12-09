#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderActionV1_t {
    int32_t championId;
    bool completed;
    int64_t duration;
    int32_t actionId;
    int32_t actorCellId;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderActionV1_t& v) {
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["duration"] = v.duration;
    j["actionId"] = v.actionId;
    j["actorCellId"] = v.actorCellId;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderActionV1_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.completed = j.at("completed").get<bool>();
    v.duration = j.at("duration").get<int64_t>();
    v.actionId = j.at("actionId").get<int32_t>();
    v.actorCellId = j.at("actorCellId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderActionV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
