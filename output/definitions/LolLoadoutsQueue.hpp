#ifndef SWAGGER_TYPES_LolLoadoutsQueue_HPP
#define SWAGGER_TYPES_LolLoadoutsQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoadoutsQueue {
    // 
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsQueue& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsQueue& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsQueue_HPP
