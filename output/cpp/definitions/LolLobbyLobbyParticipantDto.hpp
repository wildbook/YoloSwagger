#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    std::string firstPositionPreference;
    std::string puuid;
    bool ready;
    bool allowedKickOthers;
    std::string botId;
    uint64_t summonerId;
    std::string summonerName;
    bool allowedStartActivity;
    bool allowedInviteOthers;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForSoloing;
    std::string secondPositionPreference;
    bool showGhostedBanner;
    bool autoFillProtectedForPromos;
    int32_t summonerIconId;
    bool isSpectator;
    bool isLeader;
    bool allowedToggleInvite;
    bool allowedChangeActivity;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool isBot;
    int32_t teamId;
    bool autoFillEligible;
    int32_t botChampionId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["puuid"] = v.puuid;
    j["ready"] = v.ready;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["botId"] = v.botId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["summonerIconId"] = v.summonerIconId;
    j["isSpectator"] = v.isSpectator;
    j["isLeader"] = v.isLeader;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["botDifficulty"] = v.botDifficulty;
    j["isBot"] = v.isBot;
    j["teamId"] = v.teamId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["botChampionId"] = v.botChampionId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.botId = j.at("botId").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
  }
}
