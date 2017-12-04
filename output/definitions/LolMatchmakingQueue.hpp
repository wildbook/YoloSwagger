#ifndef SWAGGER_TYPES_LolMatchmakingQueue_HPP
#define SWAGGER_TYPES_LolMatchmakingQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchmakingQueue {
    // 
    int32_t id;
    // 
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueue& v) {
    j["id"] = v.id;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueue& v) {
    v.id = j.at("id").get<int32_t>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingQueue_HPP
