#ifndef SWAGGER_TYPES_LolChatConversationResource_HPP
#define SWAGGER_TYPES_LolChatConversationResource_HPP
#include <json.hpp>
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  // 
  struct LolChatConversationResource {
    // 
    std::string id;
    // 
    std::string inviterId;
    // 
    bool isMuted;
    // 
    LolChatConversationMessageResource lastMessage;
    // 
    std::string name;
    // 
    std::string password;
    // 
    std::string type;
    // 
    uint64_t unreadMessageCount;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationResource& v) {
    j["id"] = v.id;
    j["inviterId"] = v.inviterId;
    j["isMuted"] = v.isMuted;
    j["lastMessage"] = v.lastMessage;
    j["name"] = v.name;
    j["password"] = v.password;
    j["type"] = v.type;
    j["unreadMessageCount"] = v.unreadMessageCount;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationResource& v) {
    v.id = j.at("id").get<std::string>;
    v.inviterId = j.at("inviterId").get<std::string>;
    v.isMuted = j.at("isMuted").get<bool>;
    v.lastMessage = j.at("lastMessage").get<LolChatConversationMessageResource>;
    v.name = j.at("name").get<std::string>;
    v.password = j.at("password").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatConversationResource_HPP
