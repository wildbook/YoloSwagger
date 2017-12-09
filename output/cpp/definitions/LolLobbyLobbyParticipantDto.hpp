#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace leagueapi {
  struct LolLobbyLobbyParticipantDto_t {
    bool isSpectator;
    bool autoFillProtectedForPromos;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool isBot;
    bool allowedToggleInvite;
    std::string botId;
    int32_t botChampionId;
    std::string summonerName;
    bool allowedStartActivity;
    bool autoFillProtectedForSoloing;
    int32_t teamId;
    std::string puuid;
    bool allowedInviteOthers;
    bool autoFillProtectedForStreaking;
    bool allowedChangeActivity;
    bool ready;
    std::string firstPositionPreference;
    bool autoFillEligible;
    std::string secondPositionPreference;
    bool isLeader;
    bool showGhostedBanner;
    bool allowedKickOthers;
    int32_t summonerIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyParticipantDto_t& v) {
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["botDifficulty"] = v.botDifficulty;
    j["isBot"] = v.isBot;
    j["allowedToggleInvite"] = v.allowedToggleInvite;
    j["botId"] = v.botId;
    j["botChampionId"] = v.botChampionId;
    j["summonerName"] = v.summonerName;
    j["allowedStartActivity"] = v.allowedStartActivity;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["teamId"] = v.teamId;
    j["puuid"] = v.puuid;
    j["allowedInviteOthers"] = v.allowedInviteOthers;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["allowedChangeActivity"] = v.allowedChangeActivity;
    j["ready"] = v.ready;
    j["firstPositionPreference"] = v.firstPositionPreference;
    j["autoFillEligible"] = v.autoFillEligible;
    j["secondPositionPreference"] = v.secondPositionPreference;
    j["isLeader"] = v.isLeader;
    j["showGhostedBanner"] = v.showGhostedBanner;
    j["allowedKickOthers"] = v.allowedKickOthers;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyParticipantDto_t& v) {
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.isBot = j.at("isBot").get<bool>();
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>();
    v.botId = j.at("botId").get<std::string>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>();
    v.ready = j.at("ready").get<bool>();
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>();
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyLobbyParticipantDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
