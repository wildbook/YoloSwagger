#ifndef SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
#include <json.hpp>
#include "LolChatChatDomainConfig.hpp"
#include "LolChatLcuSocialConfig.hpp"
namespace leagueapi {
  // 
  struct LolChatChatServiceDynamicClientConfig {
    // 
    LolChatChatDomainConfig ChatDomain;
    // 
    LolChatLcuSocialConfig LcuSocial;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatServiceDynamicClientConfig& v) {
    j["ChatDomain"] = v.ChatDomain;
    j["LcuSocial"] = v.LcuSocial;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatServiceDynamicClientConfig& v) {
    v.ChatDomain = j.at("ChatDomain").get<LolChatChatDomainConfig>;
    v.LcuSocial = j.at("LcuSocial").get<LolChatLcuSocialConfig>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatServiceDynamicClientConfig_HPP
