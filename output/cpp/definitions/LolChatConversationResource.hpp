#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    std::string name;
    bool isMuted;
    uint64_t unreadMessageCount;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string password;
    std::string type;
    std::string id;
    std::string inviterId;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["name"] = v.name;
    j["isMuted"] = v.isMuted;
    j["unreadMessageCount"] = v.unreadMessageCount;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["password"] = v.password;
    j["type"] = v.type;
    j["id"] = v.id;
    j["inviterId"] = v.inviterId;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.isMuted = j.at("isMuted").get<bool>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.password = j.at("password").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.inviterId = j.at("inviterId").get<std::string>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
