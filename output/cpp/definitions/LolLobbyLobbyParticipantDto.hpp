#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    int32_t teamId;
    bool allowedToggleInvite;
    std::string puuid;
    bool allowedKickOthers;
    uint64_t summonerId;
    std::string firstPositionPreference;
    bool autoFillProtectedForSoloing;
    bool showGhostedBanner;
    int32_t summonerIconId;
    bool isBot;
    bool allowedChangeActivity;
    bool allowedInviteOthers;
    bool autoFillEligible;
    bool allowedStartActivity;
    std::string secondPositionPreference;
    std::string botId;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    std::string summonerName;
    bool isLeader;
    int32_t botChampionId;
    bool ready;
    bool autoFillProtectedForPromos;
    bool isSpectator;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["teamId"] = v.teamId;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["puuid"] = v.puuid;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["summonerId"] = v.summonerId;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["summonerIconId"] = v.summonerIconId;
    j["isBot"] = v.isBot;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["autoFillEligible"] = v.autoFillEligible;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["botId"] = v.botId;
    j["botDifficulty"] = v.botDifficulty;
    j["summonerName"] = v.summonerName;
    j["isLeader"] = v.isLeader;
    j["botChampionId"] = v.botChampionId;
    j["ready"] = v.ready;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.botId = j.at("botId").get<std::string>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.ready = j.at("ready").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
