#ifndef SWAGGER_TYPES_LolLobbyLobbyLastQueuedMember_HPP
#define SWAGGER_TYPES_LolLobbyLobbyLastQueuedMember_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyLobbyLastQueuedMember {
'    // 
    uint64_t id;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedMember& v) {
    j["id"] = v.id;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedMember& v) {
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyLastQueuedMember_HPP
