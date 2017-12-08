#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool allowedStartActivity;
    std::string botId;
    bool allowedToggleInvite;
    bool allowedKickOthers;
    std::string firstPositionPreference;
    int32_t summonerIconId;
    bool autoFillProtectedForPromos;
    int32_t botChampionId;
    int32_t teamId;
    bool allowedChangeActivity;
    bool isLeader;
    bool autoFillProtectedForSoloing;
    std::string puuid;
    bool isSpectator;
    uint64_t summonerId;
    std::string secondPositionPreference;
    bool ready;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool autoFillProtectedForStreaking;
    std::string summonerName;
    bool autoFillEligible;
    bool isBot;
    bool allowedInviteOthers;
    bool showGhostedBanner;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["botId"] = v.botId;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["summonerIconId"] = v.summonerIconId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["botChampionId"] = v.botChampionId;
    j["teamId"] = v.teamId;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["isLeader"] = v.isLeader;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["puuid"] = v.puuid;
    j["isSpectator"] = v.isSpectator;
    j["summonerId"] = v.summonerId;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["ready"] = v.ready;
    j["botDifficulty"] = v.botDifficulty;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["summonerName"] = v.summonerName;
    j["autoFillEligible"] = v.autoFillEligible;
    j["isBot"] = v.isBot;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["showGhostedBanner"] = v.showGhostedBanner;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.botId = j.at("botId").get<std::string>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.isBot = j.at("isBot").get<bool>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
