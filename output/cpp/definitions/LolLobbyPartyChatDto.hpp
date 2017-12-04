#ifndef SWAGGER_TYPES_LolLobbyPartyChatDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyChatDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyPartyChatDto {
    // 
    std::string jid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyChatDto& v) {
    j["jid"] = v.jid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyChatDto& v) {
    v.jid = j.at("jid").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyChatDto_HPP
