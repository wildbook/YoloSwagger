#ifndef SWAGGER_TYPES_LolMatchmakingQueue_HPP
#define SWAGGER_TYPES_LolMatchmakingQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchmakingQueue {
    // 
    bool isTeamBuilderManaged;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueue& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueue& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingQueue_HPP
