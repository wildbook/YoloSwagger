#ifndef SWAGGER_TYPES_LolPreEndOfGameGameflowSessionResource_HPP
#define SWAGGER_TYPES_LolPreEndOfGameGameflowSessionResource_HPP
#include <json.hpp>
#include "LolPreEndOfGameGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolPreEndOfGameGameflowSessionResource {
    // 
    LolPreEndOfGameGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameGameflowSessionResource& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameGameflowSessionResource& v) {
    v.phase = j.at("phase").get<LolPreEndOfGameGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolPreEndOfGameGameflowSessionResource_HPP
