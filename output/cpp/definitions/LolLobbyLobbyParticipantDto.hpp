#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool autoFillEligible;
    int32_t botChampionId;
    bool allowedKickOthers;
    bool isBot;
    std::string puuid;
    std::string firstPositionPreference;
    bool ready;
    bool autoFillProtectedForPromos;
    std::string botId;
    bool allowedToggleInvite;
    bool autoFillProtectedForSoloing;
    int32_t summonerIconId;
    uint64_t summonerId;
    bool allowedChangeActivity;
    std::string summonerName;
    bool isSpectator;
    bool autoFillProtectedForStreaking;
    bool allowedInviteOthers;
    int32_t teamId;
    bool allowedStartActivity;
    bool showGhostedBanner;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool isLeader;
    std::string secondPositionPreference;
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
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.isBot = j.at("isBot").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.botId = j.at("botId").get<std::string>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
