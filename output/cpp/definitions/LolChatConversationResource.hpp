#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  struct LolChatConversationResource_t {
    std::string_t name;
    bool_t isMuted;
    uint64_t_t unreadMessageCount;
    std::optional<LolChatConversationMessageResource_t> lastMessage;
    std::string_t password;
    std::string_t type;
    std::string_t id;
    std::string_t inviterId;
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
    v.name = j.at("name").get<std::string_t>();
    v.isMuted = j.at("isMuted").get<bool_t>();
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t_t>();
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<LolChatConversationMessageResource_t>();
    v.password = j.at("password").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.id = j.at("id").get<std::string_t>();
    v.inviterId = j.at("inviterId").get<std::string_t>();
  }
  inline std::string to_string(const LolChatConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
