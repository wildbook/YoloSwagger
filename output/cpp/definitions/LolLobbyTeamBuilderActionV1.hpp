#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderActionV1_t {
    int64_t duration;
    int32_t actorCellId;
    bool completed;
    std::string type;
    int32_t actionId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderActionV1_t& v) {
    j["duration"] = v.duration;
    j["actorCellId"] = v.actorCellId;
    j["completed"] = v.completed;
    j["type"] = v.type;
    j["actionId"] = v.actionId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderActionV1_t& v) {
    v.duration = j.at("duration").get<int64_t>();
    v.actorCellId = j.at("actorCellId").get<int32_t>();
    v.completed = j.at("completed").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.actionId = j.at("actionId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderActionV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
