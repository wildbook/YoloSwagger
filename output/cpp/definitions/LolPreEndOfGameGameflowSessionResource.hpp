#pragma once
#include <json.hpp>
#include <optional>
#include "LolPreEndOfGameGameflowPhase.hpp"
namespace leagueapi {
  struct LolPreEndOfGameGameflowSessionResource_t {
    LolPreEndOfGameGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameGameflowSessionResource_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameGameflowSessionResource_t& v) {
    v.phase = j.at("phase").get<LolPreEndOfGameGameflowPhase_t>();
  }
  inline std::string to_string(const LolPreEndOfGameGameflowSessionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
