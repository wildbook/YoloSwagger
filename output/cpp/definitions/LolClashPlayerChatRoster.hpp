#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    std::string key;
    int64_t tournamentId;
    std::string shortName;
    int64_t startTimeMs;
    LolClashTournamentState_t tournamentState;
    int32_t iconId;
    LolClashPlayerState_t playerState;
    int32_t iconColorId;
    int64_t endTimeMs;
    std::string name;
    bool isRegistered;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
    j["key"] = v.key;
    j["tournamentId"] = v.tournamentId;
    j["shortName"] = v.shortName;
    j["startTimeMs"] = v.startTimeMs;
    j["tournamentState"] = v.tournamentState;
    j["iconId"] = v.iconId;
    j["playerState"] = v.playerState;
    j["iconColorId"] = v.iconColorId;
    j["endTimeMs"] = v.endTimeMs;
    j["name"] = v.name;
    j["isRegistered"] = v.isRegistered;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.key = j.at("key").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.isRegistered = j.at("isRegistered").get<bool>();
  }
  inline std::string to_string(const LolClashPlayerChatRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
