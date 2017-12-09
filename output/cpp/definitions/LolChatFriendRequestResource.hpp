#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatFriendRequestDirection.hpp"
namespace leagueapi {
  struct LolChatFriendRequestResource_t {
    std::string name;
    LolChatFriendRequestDirection_t direction;
    std::string note;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestResource_t& v) {
    j["name"] = v.name;
    j["direction"] = v.direction;
    j["note"] = v.note;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.direction = j.at("direction").get<LolChatFriendRequestDirection_t>();
    v.note = j.at("note").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolChatFriendRequestResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
