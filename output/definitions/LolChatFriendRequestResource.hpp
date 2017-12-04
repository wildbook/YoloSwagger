#ifndef SWAGGER_TYPES_LolChatFriendRequestResource_HPP
#define SWAGGER_TYPES_LolChatFriendRequestResource_HPP
#include <json.hpp>
#include "LolChatFriendRequestDirection.hpp"
namespace leagueapi {
  // 
  struct LolChatFriendRequestResource {
    // 
    LolChatFriendRequestDirection direction;
    // 
    uint64_t id;
    // 
    std::string name;
    // 
    std::string note;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestResource& v) {
    j["direction"] = v.direction;
    j["id"] = v.id;
    j["name"] = v.name;
    j["note"] = v.note;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestResource& v) {
    v.direction = j.at("direction").get<LolChatFriendRequestDirection>;
    v.id = j.at("id").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.note = j.at("note").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatFriendRequestResource_HPP
