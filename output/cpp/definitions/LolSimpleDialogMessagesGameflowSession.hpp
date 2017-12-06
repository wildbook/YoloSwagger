#pragma once
#include <json.hpp>
#include <optional>
#include "LolSimpleDialogMessagesGameflowPhase.hpp"
namespace leagueapi {
  struct LolSimpleDialogMessagesGameflowSession_t {
    LolSimpleDialogMessagesGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolSimpleDialogMessagesGameflowPhase_t>();
  }
}
