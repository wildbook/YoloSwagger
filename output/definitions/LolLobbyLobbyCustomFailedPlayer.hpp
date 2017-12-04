#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomFailedPlayer_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomFailedPlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomFailedPlayer {
    // 
    std::string reason;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomFailedPlayer& v) {
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomFailedPlayer& v) {
    v.reason = j.at("reason").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomFailedPlayer_HPP
