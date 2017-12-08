#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashGameflowPhase.hpp"
namespace leagueapi {
  struct LolClashGameflowSession_t {
    LolClashGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolClashGameflowPhase_t>();
  }
  inline std::string to_string(const LolClashGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
