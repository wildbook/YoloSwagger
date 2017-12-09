#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    std::map<std::string, std::string> lol;
    uint32_t groupId;
    int32_t icon;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string note;
    std::string availability;
    std::string statusMessage;
    uint64_t id;
    bool isP2PConversationMuted;
    std::string name;
    uint32_t displayGroupId;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    j["lol"] = v.lol;
    j["groupId"] = v.groupId;
    j["icon"] = v.icon;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["note"] = v.note;
    j["availability"] = v.availability;
    j["statusMessage"] = v.statusMessage;
    j["id"] = v.id;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
    j["name"] = v.name;
    j["displayGroupId"] = v.displayGroupId;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.groupId = j.at("groupId").get<uint32_t>();
    v.icon = j.at("icon").get<int32_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.note = j.at("note").get<std::string>();
    v.availability = j.at("availability").get<std::string>();
    v.statusMessage = j.at("statusMessage").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>();
  }
  inline std::string to_string(const LolChatFriendResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
