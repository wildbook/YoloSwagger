#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    uint64_t unreadMessageCount;
    std::string name;
    std::string type;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string inviterId;
    bool isMuted;
    std::string id;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["name"] = v.name;
    j["type"] = v.type;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["inviterId"] = v.inviterId;
    j["isMuted"] = v.isMuted;
    j["id"] = v.id;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<std::string>();
    if(auto it = j.find("lastMessage"); it != j.end() !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.inviterId = j.at("inviterId").get<std::string>();
    v.isMuted = j.at("isMuted").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.password = j.at("password").get<std::string>();
  }
}
