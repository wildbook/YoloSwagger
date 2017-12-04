#ifndef SWAGGER_TYPES_LolChatLobbyMember_HPP
#define SWAGGER_TYPES_LolChatLobbyMember_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatLobbyMember {
    // 
    bool isOwner;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyMember& v) {
    j["isOwner"] = v.isOwner;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyMember& v) {
    v.isOwner = j.at("isOwner").get<bool>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatLobbyMember_HPP
