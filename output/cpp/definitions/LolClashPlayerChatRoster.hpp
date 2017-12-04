#ifndef SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
#define SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
#include <json.hpp>
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  // 
  struct LolClashPlayerChatRoster {
    // 
    std::string name;
    // 
    int64_t startTimeMs;
    // 
    int32_t iconId;
    // 
    int64_t endTimeMs;
    // 
    LolClashTournamentState tournamentState;
    // 
    bool isRegistered;
    // 
    std::string key;
    // 
    int32_t iconColorId;
    // 
    LolClashPlayerState playerState;
    // 
    std::string shortName;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster& v) {
    j["name"] = v.name;
    j["startTimeMs"] = v.startTimeMs;
    j["iconId"] = v.iconId;
    j["endTimeMs"] = v.endTimeMs;
    j["tournamentState"] = v.tournamentState;
    j["isRegistered"] = v.isRegistered;
    j["key"] = v.key;
    j["iconColorId"] = v.iconColorId;
    j["playerState"] = v.playerState;
    j["shortName"] = v.shortName;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster& v) {
    v.name = j.at("name").get<std::string>;
    v.startTimeMs = j.at("startTimeMs").get<int64_t>;
    v.iconId = j.at("iconId").get<int32_t>;
    v.endTimeMs = j.at("endTimeMs").get<int64_t>;
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>;
    v.isRegistered = j.at("isRegistered").get<bool>;
    v.key = j.at("key").get<std::string>;
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.playerState = j.at("playerState").get<LolClashPlayerState>;
    v.shortName = j.at("shortName").get<std::string>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
