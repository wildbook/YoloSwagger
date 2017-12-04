#ifndef SWAGGER_TYPES_LolChatFriendResource_HPP
#define SWAGGER_TYPES_LolChatFriendResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatFriendResource {
'    // 
    std::string availability;
    // 
    uint32_t displayGroupId;
    // 
    uint32_t groupId;
    // 
    int32_t icon;
    // 
    uint64_t id;
    // 
    bool isP2PConversationMuted;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    std::map<std::string, std::string> lol;
    // 
    std::string name;
    // 
    std::string note;
    // 
    std::string statusMessage;
  };

  void to_json(nlohmann::json& j, const LolChatFriendResource& v) {
    j["availability"] = v.availability;
    j["displayGroupId"] = v.displayGroupId;
    j["groupId"] = v.groupId;
    j["icon"] = v.icon;
    j["id"] = v.id;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["lol"] = v.lol;
    j["name"] = v.name;
    j["note"] = v.note;
    j["statusMessage"] = v.statusMessage;
  }

  void from_json(const nlohmann::json& j, LolChatFriendResource& v) {
    v.availability = j.at("availability").get<std::string>;
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>;
    v.groupId = j.at("groupId").get<uint32_t>;
    v.icon = j.at("icon").get<int32_t>;
    v.id = j.at("id").get<uint64_t>;
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.lol = j.at("lol").get<std::map<std::string, std::string>>;
    v.name = j.at("name").get<std::string>;
    v.note = j.at("note").get<std::string>;
    v.statusMessage = j.at("statusMessage").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatFriendResource_HPP
