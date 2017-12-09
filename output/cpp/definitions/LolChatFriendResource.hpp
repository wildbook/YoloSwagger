#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    std::map<std::string, std::string> lol;
    uint32_t displayGroupId;
    uint32_t groupId;
    std::string note;
    uint64_t id;
    int32_t icon;
    std::string availability;
    std::string statusMessage;
    std::string name;
    std::optional<std::string> lastSeenOnlineTimestamp;
    bool isP2PConversationMuted;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    j["lol"] = v.lol;
    j["displayGroupId"] = v.displayGroupId;
    j["groupId"] = v.groupId;
    j["note"] = v.note;
    j["id"] = v.id;
    j["icon"] = v.icon;
    j["availability"] = v.availability;
    j["statusMessage"] = v.statusMessage;
    j["name"] = v.name;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>();
    v.groupId = j.at("groupId").get<uint32_t>();
    v.note = j.at("note").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.icon = j.at("icon").get<int32_t>();
    v.availability = j.at("availability").get<std::string>();
    v.statusMessage = j.at("statusMessage").get<std::string>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>();
  }
  inline std::string to_string(const LolChatFriendResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
