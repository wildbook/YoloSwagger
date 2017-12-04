#ifndef SWAGGER_TYPES_GameClientChatMessageResource_HPP
#define SWAGGER_TYPES_GameClientChatMessageResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameClientChatMessageResource {
    // 
    std::string body;
    // 
    std::string fromSummonerName;
  };

  inline void to_json(nlohmann::json& j, const GameClientChatMessageResource& v) {
    j["body"] = v.body;
    j["fromSummonerName"] = v.fromSummonerName;
  }

  inline void from_json(const nlohmann::json& j, GameClientChatMessageResource& v) {
    v.body = j.at("body").get<std::string>;
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_GameClientChatMessageResource_HPP
