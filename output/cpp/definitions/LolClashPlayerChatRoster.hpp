#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    int32_t iconColorId;
    int64_t endTimeMs;
    bool isRegistered;
    std::string shortName;
    LolClashTournamentState_t tournamentState;
    LolClashPlayerState_t playerState;
    int64_t tournamentId;
    std::string key;
    std::string name;
    int64_t startTimeMs;
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
    j["iconColorId"] = v.iconColorId;
    j["endTimeMs"] = v.endTimeMs;
    j["isRegistered"] = v.isRegistered;
    j["shortName"] = v.shortName;
    j["tournamentState"] = v.tournamentState;
    j["playerState"] = v.playerState;
    j["tournamentId"] = v.tournamentId;
    j["key"] = v.key;
    j["name"] = v.name;
    j["startTimeMs"] = v.startTimeMs;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.key = j.at("key").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.iconId = j.at("iconId").get<int32_t>();
  }
  inline std::string to_string(const LolClashPlayerChatRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
