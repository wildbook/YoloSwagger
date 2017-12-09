#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatSessionState_t {
    disconnected_E = 3,
    shuttingdown_E = 4,
    connected_E = 1,
    initializing_E = 0,
    loaded_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionState_t& v) {
    switch(v) {
      case LolChatSessionState_t::disconnected_E:
        j = "disconnected";
      break;
      case LolChatSessionState_t::shuttingdown_E:
        j = "shuttingdown";
      break;
      case LolChatSessionState_t::connected_E:
        j = "connected";
      break;
      case LolChatSessionState_t::initializing_E:
        j = "initializing";
      break;
      case LolChatSessionState_t::loaded_E:
        j = "loaded";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "disconnected"){
      v = LolChatSessionState_t::disconnected_E;
      return;
    }
    if(s == "shuttingdown"){
      v = LolChatSessionState_t::shuttingdown_E;
      return;
    }
    if(s == "connected"){
      v = LolChatSessionState_t::connected_E;
      return;
    }
    if(s == "initializing"){
      v = LolChatSessionState_t::initializing_E;
      return;
    }
    if(s == "loaded"){
      v = LolChatSessionState_t::loaded_E;
      return;
    }
  }
  inline std::string to_string(const LolChatSessionState_t& v) {
    switch(v) {
      case LolChatSessionState_t::disconnected_E:
        return "disconnected";
      case LolChatSessionState_t::shuttingdown_E:
        return "shuttingdown";
      case LolChatSessionState_t::connected_E:
        return "connected";
      case LolChatSessionState_t::initializing_E:
        return "initializing";
      case LolChatSessionState_t::loaded_E:
        return "loaded";
    }
  }

}
