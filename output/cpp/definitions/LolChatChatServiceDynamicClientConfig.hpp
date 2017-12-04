#ifndef SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
#include <json.hpp>
#include "LolChatLcuSocialConfig.hpp"
#include "LolChatChatDomainConfig.hpp"
namespace leagueapi {
  // 
  struct LolChatChatServiceDynamicClientConfig {
    // 
    LolChatLcuSocialConfig LcuSocial;
    // 
    LolChatChatDomainConfig ChatDomain;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatServiceDynamicClientConfig& v) {
    j["LcuSocial"] = v.LcuSocial;
    j["ChatDomain"] = v.ChatDomain;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatServiceDynamicClientConfig& v) {
    v.LcuSocial = j.at("LcuSocial").get<LolChatLcuSocialConfig>;
    v.ChatDomain = j.at("ChatDomain").get<LolChatChatDomainConfig>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
