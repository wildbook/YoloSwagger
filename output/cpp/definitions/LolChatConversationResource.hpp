#ifndef SWAGGER_TYPES_LolChatConversationResource_HPP
#define SWAGGER_TYPES_LolChatConversationResource_HPP
#include <json.hpp>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  // 
  struct LolChatConversationResource {
    // 
    std::string name;
    // 
    bool isMuted;
    // 
    uint64_t unreadMessageCount;
    // 
    LolChatConversationMessageResource lastMessage;
    // 
    std::string password;
    // 
    std::string type;
    // 
    std::string id;
    // 
    std::string inviterId;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource& v) {
    j["name"] = v.name;
    j["isMuted"] = v.isMuted;
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["lastMessage"] = v.lastMessage;
    j["password"] = v.password;
    j["type"] = v.type;
    j["id"] = v.id;
    j["inviterId"] = v.inviterId;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource& v) {
    v.name = j.at("name").get<std::string>;
    v.isMuted = j.at("isMuted").get<bool>;
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>;
    v.lastMessage = j.at("lastMessage").get<LolChatConversationMessageResource>;
    v.password = j.at("password").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.inviterId = j.at("inviterId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatConversationResource_HPP
