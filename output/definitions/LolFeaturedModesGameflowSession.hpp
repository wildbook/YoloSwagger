#ifndef SWAGGER_TYPES_LolFeaturedModesGameflowSession_HPP
#define SWAGGER_TYPES_LolFeaturedModesGameflowSession_HPP
#include <json.hpp>
#include "LolFeaturedModesGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolFeaturedModesGameflowSession {
    // 
    LolFeaturedModesGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesGameflowSession& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesGameflowSession& v) {
    v.phase = j.at("phase").get<LolFeaturedModesGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesGameflowSession_HPP
