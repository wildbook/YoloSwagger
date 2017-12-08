#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoadoutsQueue_t {
    bool_t isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsQueue_t& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsQueue_t& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
  }
  inline std::string to_string(const LolLoadoutsQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
