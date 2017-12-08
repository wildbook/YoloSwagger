#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesGameflowPhase.hpp"
namespace leagueapi {
  struct LolFeaturedModesGameflowSession_t {
    LolFeaturedModesGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolFeaturedModesGameflowPhase_t>();
  }
  inline std::string to_string(const LolFeaturedModesGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
