#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatSessionState.hpp"
namespace leagueapi {
  struct LolChatSessionResource_t {
    LolChatSessionState_t sessionState;
    uint32_t sessionExpire;
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionResource_t& v) {
    j["sessionState"] = v.sessionState;
    j["sessionExpire"] = v.sessionExpire;
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionResource_t& v) {
    v.sessionState = j.at("sessionState").get<LolChatSessionState_t>();
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>();
  }
}
