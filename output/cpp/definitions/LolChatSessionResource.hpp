#ifndef SWAGGER_TYPES_LolChatSessionResource_HPP
#define SWAGGER_TYPES_LolChatSessionResource_HPP
#include <json.hpp>
#include "LolChatSessionState.hpp"
namespace leagueapi {
  // 
  struct LolChatSessionResource {
    // 
    uint32_t sessionExpire;
    // 
    LolChatSessionState sessionState;
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionResource& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionResource& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>;
    v.sessionState = j.at("sessionState").get<LolChatSessionState>;
  }

}
#endif // SWAGGER_TYPES_LolChatSessionResource_HPP
