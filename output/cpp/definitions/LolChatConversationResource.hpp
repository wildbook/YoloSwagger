#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string id;
    bool isMuted;
    std::string type;
    uint64_t unreadMessageCount;
    std::string inviterId;
    std::string name;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource_t& v) {
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["id"] = v.id;
    j["isMuted"] = v.isMuted;
    j["type"] = v.type;
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["inviterId"] = v.inviterId;
    j["name"] = v.name;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource_t& v) {
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.id = j.at("id").get<std::string>();
    v.isMuted = j.at("isMuted").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>();
    v.inviterId = j.at("inviterId").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.password = j.at("password").get<std::string>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
