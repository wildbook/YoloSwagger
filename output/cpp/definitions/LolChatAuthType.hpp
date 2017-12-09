#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatAuthType_t {
    rsoCreate_E = 1,
    plain_E = 0,
    rsoRefresh_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthType_t& v) {
    switch(v) {
      case LolChatAuthType_t::rsoCreate_E:
        j = "rsoCreate";
      break;
      case LolChatAuthType_t::plain_E:
        j = "plain";
      break;
      case LolChatAuthType_t::rsoRefresh_E:
        j = "rsoRefresh";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "rsoCreate"){
      v = LolChatAuthType_t::rsoCreate_E;
      return;
    }
    if(s == "plain"){
      v = LolChatAuthType_t::plain_E;
      return;
    }
    if(s == "rsoRefresh"){
      v = LolChatAuthType_t::rsoRefresh_E;
      return;
    }
  }
  inline std::string to_string(const LolChatAuthType_t& v) {
    switch(v) {
      case LolChatAuthType_t::rsoCreate_E:
        return "rsoCreate";
      case LolChatAuthType_t::plain_E:
        return "plain";
      case LolChatAuthType_t::rsoRefresh_E:
        return "rsoRefresh";
    }
  }

}
