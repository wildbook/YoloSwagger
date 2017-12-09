#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    bool isMuted;
    std::string id;
    std::string name;
    uint64_t unreadMessageCount;
    std::string password;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string inviterId;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["isMuted"] = v.isMuted;
    j["id"] = v.id;
    j["name"] = v.name;
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["password"] = v.password;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["inviterId"] = v.inviterId;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.isMuted = j.at("isMuted").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    v.password = j.at("password").get<std::string>();
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.inviterId = j.at("inviterId").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
