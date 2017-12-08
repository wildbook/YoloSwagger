#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootGameflowPhase.hpp"
namespace leagueapi {
  struct LolLootGameflowSession_t {
    LolLootGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolLootGameflowPhase_t>();
  }
  inline std::string to_string(const LolLootGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
