#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    std::string shortName;
    int64_t tournamentId;
    std::string key;
    std::string name;
    int32_t iconId;
    int64_t endTimeMs;
    int64_t startTimeMs;
    bool isRegistered;
    int32_t iconColorId;
    LolClashPlayerState_t playerState;
    LolClashTournamentState_t tournamentState;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
    j["shortName"] = v.shortName;
    j["tournamentId"] = v.tournamentId;
    j["key"] = v.key;
    j["name"] = v.name;
    j["iconId"] = v.iconId;
    j["endTimeMs"] = v.endTimeMs;
    j["startTimeMs"] = v.startTimeMs;
    j["isRegistered"] = v.isRegistered;
    j["iconColorId"] = v.iconColorId;
    j["playerState"] = v.playerState;
    j["tournamentState"] = v.tournamentState;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.key = j.at("key").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
  }
}
