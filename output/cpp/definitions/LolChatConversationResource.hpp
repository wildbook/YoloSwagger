#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    std::string id;
    std::string inviterId;
    bool isMuted;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string name;
    std::string password;
    std::string type;
    uint64_t unreadMessageCount;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["id"] = v.id;
    j["inviterId"] = v.inviterId;
    j["isMuted"] = v.isMuted;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["name"] = v.name;
    j["password"] = v.password;
    j["type"] = v.type;
    j["unreadMessageCount"] = v.unreadMessageCount;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.id = j.at("id").get<std::string>();
    v.inviterId = j.at("inviterId").get<std::string>();
    v.isMuted = j.at("isMuted").get<bool>();
    if(auto it = j.find("lastMessage"); it != j.end() !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.name = j.at("name").get<std::string>();
    v.password = j.at("password").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
  }
}
