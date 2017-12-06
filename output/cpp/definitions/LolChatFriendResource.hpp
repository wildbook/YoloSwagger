#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    uint32_t displayGroupId;
    uint32_t groupId;
    std::string name;
    std::string note;
    std::string availability;
    std::string statusMessage;
    int32_t icon;
    std::map<std::string, std::string> lol;
    uint64_t id;
    std::optional<std::string> lastSeenOnlineTimestamp;
    bool isP2PConversationMuted;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    j["displayGroupId"] = v.displayGroupId;
    j["groupId"] = v.groupId;
    j["name"] = v.name;
    j["note"] = v.note;
    j["availability"] = v.availability;
    j["statusMessage"] = v.statusMessage;
    j["icon"] = v.icon;
    j["lol"] = v.lol;
    j["id"] = v.id;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>();
    v.groupId = j.at("groupId").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.note = j.at("note").get<std::string>();
    v.availability = j.at("availability").get<std::string>();
    v.statusMessage = j.at("statusMessage").get<std::string>();
    v.icon = j.at("icon").get<int32_t>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>();
  }
}
