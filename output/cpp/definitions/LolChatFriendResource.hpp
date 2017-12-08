#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatFriendResource_t {
    std::string_t name;
    bool_t isP2PConversationMuted;
    std::map<std::string, std::string> lol;
    std::string_t availability;
    std::string_t note;
    uint32_t_t displayGroupId;
    uint32_t_t groupId;
    std::optional<std::string_t> lastSeenOnlineTimestamp;
    uint64_t_t id;
    std::string_t statusMessage;
    int32_t_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendResource_t& v) {
    j["name"] = v.name;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    j["note"] = v.note;
    j["displayGroupId"] = v.displayGroupId;
    j["groupId"] = v.groupId;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    j["statusMessage"] = v.statusMessage;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendResource_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool_t>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.availability = j.at("availability").get<std::string_t>();
    v.note = j.at("note").get<std::string_t>();
    v.displayGroupId = j.at("displayGroupId").get<uint32_t_t>();
    v.groupId = j.at("groupId").get<uint32_t_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.statusMessage = j.at("statusMessage").get<std::string_t>();
    v.icon = j.at("icon").get<int32_t_t>();
  }
  inline std::string to_string(const LolChatFriendResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
