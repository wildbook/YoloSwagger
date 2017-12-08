#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    std::string note;
    uint64_t id;
    std::string statusMessage;
    std::map<std::string, std::string> lol;
    uint32_t groupId;
    std::string availability;
    std::optional<std::string> lastSeenOnlineTimestamp;
    int32_t icon;
    std::string name;
    uint32_t displayGroupId;
    bool isP2PConversationMuted;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    j["note"] = v.note;
    j["id"] = v.id;
    j["statusMessage"] = v.statusMessage;
    j["lol"] = v.lol;
    j["groupId"] = v.groupId;
    j["availability"] = v.availability;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["icon"] = v.icon;
    j["name"] = v.name;
    j["displayGroupId"] = v.displayGroupId;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    v.note = j.at("note").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.statusMessage = j.at("statusMessage").get<std::string>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.groupId = j.at("groupId").get<uint32_t>();
    v.availability = j.at("availability").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.icon = j.at("icon").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>();
  }
  inline std::string to_string(const LolChatFriendResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
