#ifndef SWAGGER_TYPES_LolChatFriendResource_HPP
#define SWAGGER_TYPES_LolChatFriendResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatFriendResource {
    // 
    std::string name;
    // 
    bool isP2PConversationMuted;
    // 
    std::map<std::string, std::string> lol;
    // 
    std::string availability;
    // 
    std::string note;
    // 
    uint32_t displayGroupId;
    // 
    uint32_t groupId;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    uint64_t id;
    // 
    std::string statusMessage;
    // 
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource& v) {
    j["name"] = v.name;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    j["note"] = v.note;
    j["displayGroupId"] = v.displayGroupId;
    j["groupId"] = v.groupId;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    j["statusMessage"] = v.statusMessage;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource& v) {
    v.name = j.at("name").get<std::string>;
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>;
    v.lol = j.at("lol").get<std::map<std::string, std::string>>;
    v.availability = j.at("availability").get<std::string>;
    v.note = j.at("note").get<std::string>;
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>;
    v.groupId = j.at("groupId").get<uint32_t>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.statusMessage = j.at("statusMessage").get<std::string>;
    v.icon = j.at("icon").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatFriendResource_HPP
