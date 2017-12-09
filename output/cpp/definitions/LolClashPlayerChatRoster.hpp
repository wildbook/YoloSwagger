#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    std::string key;
    int64_t endTimeMs;
    int32_t iconId;
    bool isRegistered;
    int64_t startTimeMs;
    int64_t tournamentId;
    int32_t iconColorId;
    std::string shortName;
    std::string name;
    LolClashPlayerState_t playerState;
    LolClashTournamentState_t tournamentState;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
    j["key"] = v.key;
    j["endTimeMs"] = v.endTimeMs;
    j["iconId"] = v.iconId;
    j["isRegistered"] = v.isRegistered;
    j["startTimeMs"] = v.startTimeMs;
    j["tournamentId"] = v.tournamentId;
    j["iconColorId"] = v.iconColorId;
    j["shortName"] = v.shortName;
    j["name"] = v.name;
    j["playerState"] = v.playerState;
    j["tournamentState"] = v.tournamentState;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.key = j.at("key").get<std::string>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
  }
  inline std::string to_string(const LolClashPlayerChatRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
