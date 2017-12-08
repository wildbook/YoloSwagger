#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    std::string_t name;
    int64_t_t startTimeMs;
    int32_t_t iconId;
    int64_t_t endTimeMs;
    LolClashTournamentState_t tournamentState;
    bool_t isRegistered;
    std::string_t key;
    int32_t_t iconColorId;
    LolClashPlayerState_t playerState;
    std::string_t shortName;
    int64_t_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t_t>();
    v.iconId = j.at("iconId").get<int32_t_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t_t>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
    v.isRegistered = j.at("isRegistered").get<bool_t>();
    v.key = j.at("key").get<std::string_t>();
    v.iconColorId = j.at("iconColorId").get<int32_t_t>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashPlayerChatRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
