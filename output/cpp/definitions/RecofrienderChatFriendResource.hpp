#ifndef SWAGGER_TYPES_RecofrienderChatFriendResource_HPP
#define SWAGGER_TYPES_RecofrienderChatFriendResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderChatFriendResource {
    // 
    uint64_t id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderChatFriendResource& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderChatFriendResource& v) {
    v.id = j.at("id").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderChatFriendResource_HPP