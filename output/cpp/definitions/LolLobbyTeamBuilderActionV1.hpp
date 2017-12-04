#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderActionV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderActionV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderActionV1 {
    // 
    int32_t championId;
    // 
    bool completed;
    // 
    int32_t actorCellId;
    // 
    int32_t actionId;
    // 
    int64_t duration;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderActionV1& v) {
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
    j["actionId"] = v.actionId;
    j["duration"] = v.duration;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderActionV1& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.completed = j.at("completed").get<bool>;
    v.actorCellId = j.at("actorCellId").get<int32_t>;
    v.actionId = j.at("actionId").get<int32_t>;
    v.duration = j.at("duration").get<int64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderActionV1_HPP
