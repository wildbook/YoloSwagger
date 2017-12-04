#ifndef SWAGGER_TYPES_LolHonorV2GameflowSession_HPP
#define SWAGGER_TYPES_LolHonorV2GameflowSession_HPP
#include <json.hpp>
#include "LolHonorV2GameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2GameflowSession {
    // 
    LolHonorV2GameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2GameflowSession& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2GameflowSession& v) {
    v.phase = j.at("phase").get<LolHonorV2GameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2GameflowSession_HPP
