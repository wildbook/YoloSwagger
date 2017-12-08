#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingQueue_t {
    bool_t isTeamBuilderManaged;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueue_t& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueue_t& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolMatchmakingQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
