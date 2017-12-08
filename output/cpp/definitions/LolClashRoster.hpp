#pragma once
#include <json.hpp>
#include <optional>
#include "RewardIcon.hpp"
#include "LolClashRosterPhaseInfo.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterMember.hpp"
#include "LolClashSuggestedInvite.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    int32_t wins;
    std::string name;
    std::string shortName;
    bool isActiveInCurrentPhase;
    int32_t losses;
    uint64_t captainSummonerId;
    std::vector<RewardIcon_t> availableIcons;
    bool eliminated;
    int32_t iconId;
    int32_t tier;
    int32_t numCompletedPeriods;
    bool isRegistered;
    int32_t currentBracketWins;
    std::string id;
    RosterWithdraw_t withdraw;
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    int32_t iconColorId;
    int64_t tournamentId;
    std::vector<LolClashRosterMember_t> members;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    bool isCurrentBracketComplete;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["wins"] = v.wins;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["losses"] = v.losses;
    j["captainSummonerId"] = v.captainSummonerId;
    j["availableIcons"] = v.availableIcons;
    j["eliminated"] = v.eliminated;
    j["iconId"] = v.iconId;
    j["tier"] = v.tier;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["isRegistered"] = v.isRegistered;
    j["currentBracketWins"] = v.currentBracketWins;
    j["id"] = v.id;
    j["withdraw"] = v.withdraw;
    j["suggestedInvites"] = v.suggestedInvites;
    j["iconColorId"] = v.iconColorId;
    j["tournamentId"] = v.tournamentId;
    j["members"] = v.members;
    j["phaseInfos"] = v.phaseInfos;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.wins = j.at("wins").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>();
    v.id = j.at("id").get<std::string>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>();
  }
  inline std::string to_string(const LolClashRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
