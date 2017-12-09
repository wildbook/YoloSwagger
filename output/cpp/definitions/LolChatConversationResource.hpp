#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    uint64_t unreadMessageCount;
    std::string type;
    std::string name;
    bool isMuted;
    std::string inviterId;
    std::string id;
    std::string password;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["type"] = v.type;
    j["name"] = v.name;
    j["isMuted"] = v.isMuted;
    j["inviterId"] = v.inviterId;
    j["id"] = v.id;
    j["password"] = v.password;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.isMuted = j.at("isMuted").get<bool>();
    v.inviterId = j.at("inviterId").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.password = j.at("password").get<std::string>();
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
