#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    std::string inviterId;
    std::string password;
    uint64_t unreadMessageCount;
    bool isMuted;
    std::string name;
    std::string id;
    std::string type;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    j["inviterId"] = v.inviterId;
    j["password"] = v.password;
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["isMuted"] = v.isMuted;
    j["name"] = v.name;
    j["id"] = v.id;
    j["type"] = v.type;
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    v.inviterId = j.at("inviterId").get<std::string>();
    v.password = j.at("password").get<std::string>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    v.isMuted = j.at("isMuted").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.type = j.at("type").get<std::string>();
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
