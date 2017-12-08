#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool_t autoFillEligible;
    int32_t_t botChampionId;
    bool_t allowedKickOthers;
    bool_t isBot;
    std::string_t puuid;
    std::string_t firstPositionPreference;
    bool_t ready;
    bool_t autoFillProtectedForPromos;
    std::string_t botId;
    bool_t allowedToggleInvite;
    bool_t autoFillProtectedForSoloing;
    int32_t_t summonerIconId;
    uint64_t_t summonerId;
    bool_t allowedChangeActivity;
    std::string_t summonerName;
    bool_t isSpectator;
    bool_t autoFillProtectedForStreaking;
    bool_t allowedInviteOthers;
    int32_t_t teamId;
    bool_t allowedStartActivity;
    bool_t showGhostedBanner;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool_t isLeader;
    std::string_t secondPositionPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["botChampionId"] = v.botChampionId;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["isBot"] = v.isBot;
    j["puuid"] = v.puuid;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["ready"] = v.ready;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["botId"] = v.botId;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["summonerName"] = v.summonerName;
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["teamId"] = v.teamId;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["botDifficulty"] = v.botDifficulty;
    j["isLeader"] = v.isLeader;
    j["secondPositionPreference"] = v.secondPositionPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.botChampionId = j.at("botChampionId").get<int32_t_t>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool_t>();
    v.isBot = j.at("isBot").get<bool_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string_t>();
    v.ready = j.at("ready").get<bool_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    v.botId = j.at("botId").get<std::string_t>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.isSpectator = j.at("isSpectator").get<bool_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool_t>();
    v.teamId = j.at("teamId").get<int32_t_t>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool_t>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.isLeader = j.at("isLeader").get<bool_t>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
