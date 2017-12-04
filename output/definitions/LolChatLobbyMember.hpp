#ifndef SWAGGER_TYPES_LolChatLobbyMember_HPP
#define SWAGGER_TYPES_LolChatLobbyMember_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatLobbyMember {
'    // 
    uint64_t id;
    // 
    bool isOwner;
  };

  void to_json(nlohmann::json& j, const LolChatLobbyMember& v) {
    j["id"] = v.id;
    j["isOwner"] = v.isOwner;
  }

  void from_json(const nlohmann::json& j, LolChatLobbyMember& v) {
    v.id = j.at("id").get<uint64_t>;
    v.isOwner = j.at("isOwner").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatLobbyMember_HPP
