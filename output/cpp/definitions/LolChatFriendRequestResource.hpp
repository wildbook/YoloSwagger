#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatFriendRequestDirection.hpp"
namespace leagueapi {
  struct LolChatFriendRequestResource_t {
    uint64_t id;
    std::string name;
    LolChatFriendRequestDirection_t direction;
    std::string note;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestResource_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["direction"] = v.direction;
    j["note"] = v.note;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestResource_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.direction = j.at("direction").get<LolChatFriendRequestDirection_t>();
    v.note = j.at("note").get<std::string>();
  }
}
