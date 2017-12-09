#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatLcuSocialConfig.hpp"
#include "LolChatChatDomainConfig.hpp"
namespace leagueapi {
  struct LolChatChatServiceDynamicClientConfig_t {
    std::optional<LolChatChatDomainConfig_t> ChatDomain;
    std::optional<LolChatLcuSocialConfig_t> LcuSocial;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatServiceDynamicClientConfig_t& v) {
    if(v.ChatDomain)
      j["ChatDomain"] = *v.ChatDomain;
    if(v.LcuSocial)
      j["LcuSocial"] = *v.LcuSocial;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatServiceDynamicClientConfig_t& v) {
    if(auto it = j.find("ChatDomain"); it != j.end() && !it->is_null())
      v.ChatDomain = it->get<LolChatChatDomainConfig_t>();
    if(auto it = j.find("LcuSocial"); it != j.end() && !it->is_null())
      v.LcuSocial = it->get<LolChatLcuSocialConfig_t>();
  }
  inline std::string to_string(const LolChatChatServiceDynamicClientConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
