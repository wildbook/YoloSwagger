#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::map<std::string, std::string> lol;
    std::string statusMessage;
    uint32_t groupId;
    std::string availability;
    bool isP2PConversationMuted;
    uint32_t displayGroupId;
    std::string note;
    int32_t icon;
    uint64_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["lol"] = v.lol;
    j["statusMessage"] = v.statusMessage;
    j["groupId"] = v.groupId;
    j["availability"] = v.availability;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
    j["displayGroupId"] = v.displayGroupId;
    j["note"] = v.note;
    j["icon"] = v.icon;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.statusMessage = j.at("statusMessage").get<std::string>();
    v.groupId = j.at("groupId").get<uint32_t>();
    v.availability = j.at("availability").get<std::string>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>();
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>();
    v.note = j.at("note").get<std::string>();
    v.icon = j.at("icon").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolChatFriendResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
