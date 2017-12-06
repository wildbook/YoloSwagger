#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool allowedChangeActivity;
    bool allowedInviteOthers;
    bool allowedKickOthers;
    bool allowedStartActivity;
    bool allowedToggleInvite;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForStreaking;
    int32_t botChampionId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    std::string botId;
    std::string firstPositionPreference;
    bool isBot;
    bool isLeader;
    bool isSpectator;
    std::string puuid;
    bool ready;
    std::string secondPositionPreference;
    bool showGhostedBanner;
    int32_t summonerIconId;
    uint64_t summonerId;
    std::string summonerName;
    int32_t teamId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["botChampionId"] = v.botChampionId;
    j["botDifficulty"] = v.botDifficulty;
    j["botId"] = v.botId;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["isBot"] = v.isBot;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    j["puuid"] = v.puuid;
    j["ready"] = v.ready;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.botId = j.at("botId").get<std::string>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.isBot = j.at("isBot").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
  }
}
