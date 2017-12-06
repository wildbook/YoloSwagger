#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatSessionState.hpp"
namespace leagueapi {
  struct LolChatSessionResource_t {
    uint32_t sessionExpire;
    LolChatSessionState_t sessionState;
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionResource_t& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionResource_t& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>();
    v.sessionState = j.at("sessionState").get<LolChatSessionState_t>();
  }
}
