#ifndef SWAGGER_TYPES_LolUserExperienceGameflowSession_HPP
#define SWAGGER_TYPES_LolUserExperienceGameflowSession_HPP
#include <json.hpp>
#include "LolUserExperienceGameflowPhase.hpp"
namespace test {
  // 
  struct LolUserExperienceGameflowSession {
'    // 
    LolUserExperienceGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolUserExperienceGameflowSession& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolUserExperienceGameflowSession& v) {
    v.phase = j.at("phase").get<LolUserExperienceGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolUserExperienceGameflowSession_HPP
