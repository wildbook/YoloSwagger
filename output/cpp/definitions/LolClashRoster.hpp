#pragma once
#include <json.hpp>
#include <optional>
#include "RewardIcon.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterPhaseInfo.hpp"
#include "LolClashRosterMember.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    uint64_t captainSummonerId;
    bool isRegistered;
    bool isCurrentBracketComplete;
    int64_t tournamentId;
    RosterWithdraw_t withdraw;
    std::string shortName;
    std::vector<RewardIcon_t> availableIcons;
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    bool eliminated;
    int32_t currentBracketWins;
    int32_t iconId;
    int32_t numCompletedPeriods;
    int32_t losses;
    int32_t iconColorId;
    int32_t wins;
    std::string name;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    std::string id;
    bool isActiveInCurrentPhase;
    int32_t tier;
    std::vector<LolClashRosterMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["captainSummonerId"] = v.captainSummonerId;
    j["isRegistered"] = v.isRegistered;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
    j["shortName"] = v.shortName;
    j["availableIcons"] = v.availableIcons;
    j["suggestedInvites"] = v.suggestedInvites;
    j["eliminated"] = v.eliminated;
    j["currentBracketWins"] = v.currentBracketWins;
    j["iconId"] = v.iconId;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["losses"] = v.losses;
    j["iconColorId"] = v.iconColorId;
    j["wins"] = v.wins;
    j["name"] = v.name;
    j["phaseInfos"] = v.phaseInfos;
    j["id"] = v.id;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["tier"] = v.tier;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.id = j.at("id").get<std::string>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>();
    v.tier = j.at("tier").get<int32_t>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
  }
  inline std::string to_string(const LolClashRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
