#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool allowedKickOthers;
    bool allowedStartActivity;
    int32_t summonerIconId;
    std::string puuid;
    bool isLeader;
    bool allowedInviteOthers;
    int32_t teamId;
    bool isSpectator;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool autoFillProtectedForPromos;
    int32_t botChampionId;
    std::string botId;
    bool allowedChangeActivity;
    bool showGhostedBanner;
    uint64_t summonerId;
    bool ready;
    std::string secondPositionPreference;
    std::string firstPositionPreference;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    std::string summonerName;
    bool isBot;
    bool allowedToggleInvite;
    bool autoFillProtectedForSoloing;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["summonerIconId"] = v.summonerIconId;
    j["puuid"] = v.puuid;
    j["isLeader"] = v.isLeader;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["teamId"] = v.teamId;
    j["isSpectator"] = v.isSpectator;
    j["botDifficulty"] = v.botDifficulty;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["botChampionId"] = v.botChampionId;
    j["botId"] = v.botId;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["summonerId"] = v.summonerId;
    j["ready"] = v.ready;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["summonerName"] = v.summonerName;
    j["isBot"] = v.isBot;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.botId = j.at("botId").get<std::string>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ready = j.at("ready").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.isBot = j.at("isBot").get<bool>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
