#ifndef SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
#define SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
#include <json.hpp>
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace test {
  // 
  struct LolClashPlayerChatRoster {
'    // 
    int64_t endTimeMs;
    // 
    int32_t iconColorId;
    // 
    int32_t iconId;
    // 
    bool isRegistered;
    // 
    std::string key;
    // 
    std::string name;
    // 
    LolClashPlayerState playerState;
    // 
    std::string shortName;
    // 
    int64_t startTimeMs;
    // 
    int64_t tournamentId;
    // 
    LolClashTournamentState tournamentState;
  };

  void to_json(nlohmann::json& j, const LolClashPlayerChatRoster& v) {
    j["endTimeMs"] = v.endTimeMs;
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
    j["isRegistered"] = v.isRegistered;
    j["key"] = v.key;
    j["name"] = v.name;
    j["playerState"] = v.playerState;
    j["shortName"] = v.shortName;
    j["startTimeMs"] = v.startTimeMs;
    j["tournamentId"] = v.tournamentId;
    j["tournamentState"] = v.tournamentState;
  }

  void from_json(const nlohmann::json& j, LolClashPlayerChatRoster& v) {
    v.endTimeMs = j.at("endTimeMs").get<int64_t>;
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.iconId = j.at("iconId").get<int32_t>;
    v.isRegistered = j.at("isRegistered").get<bool>;
    v.key = j.at("key").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.playerState = j.at("playerState").get<LolClashPlayerState>;
    v.shortName = j.at("shortName").get<std::string>;
    v.startTimeMs = j.at("startTimeMs").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerChatRoster_HPP
