#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingQueue_t {
    int32_t id;
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueue_t& v) {
    j["id"] = v.id;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueue_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
  }
  inline std::string to_string(const LolMatchmakingQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
