#ifndef SWAGGER_TYPES_LolClashRoster_HPP
#define SWAGGER_TYPES_LolClashRoster_HPP
#include <json.hpp>
#include "RosterWithdraw.hpp"
#include "LolClashRosterMember.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "LolClashRosterPhaseInfo.hpp"
#include "RewardIcon.hpp"
namespace test {
  // 
  struct LolClashRoster {
'    // 
    std::vector<RewardIcon> availableIcons;
    // 
    uint64_t captainSummonerId;
    // 
    int32_t currentBracketWins;
    // 
    bool eliminated;
    // 
    int32_t iconColorId;
    // 
    int32_t iconId;
    // 
    std::string id;
    // 
    bool isActiveInCurrentPhase;
    // 
    bool isCurrentBracketComplete;
    // 
    bool isRegistered;
    // 
    int32_t losses;
    // 
    std::vector<LolClashRosterMember> members;
    // 
    std::string name;
    // 
    int32_t numCompletedPeriods;
    // 
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    // 
    std::string shortName;
    // 
    std::vector<LolClashSuggestedInvite> suggestedInvites;
    // 
    int32_t tier;
    // 
    int64_t tournamentId;
    // 
    int32_t wins;
    // 
    RosterWithdraw withdraw;
  };

  void to_json(nlohmann::json& j, const LolClashRoster& v) {
    j["availableIcons"] = v.availableIcons;
    j["captainSummonerId"] = v.captainSummonerId;
    j["currentBracketWins"] = v.currentBracketWins;
    j["eliminated"] = v.eliminated;
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
    j["id"] = v.id;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["isRegistered"] = v.isRegistered;
    j["losses"] = v.losses;
    j["members"] = v.members;
    j["name"] = v.name;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["phaseInfos"] = v.phaseInfos;
    j["shortName"] = v.shortName;
    j["suggestedInvites"] = v.suggestedInvites;
    j["tier"] = v.tier;
    j["tournamentId"] = v.tournamentId;
    j["wins"] = v.wins;
    j["withdraw"] = v.withdraw;
  }

  void from_json(const nlohmann::json& j, LolClashRoster& v) {
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>;
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>;
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>;
    v.eliminated = j.at("eliminated").get<bool>;
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.iconId = j.at("iconId").get<int32_t>;
    v.id = j.at("id").get<std::string>;
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>;
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>;
    v.isRegistered = j.at("isRegistered").get<bool>;
    v.losses = j.at("losses").get<int32_t>;
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>;
    v.name = j.at("name").get<std::string>;
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>;
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>;
    v.shortName = j.at("shortName").get<std::string>;
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>;
    v.tier = j.at("tier").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.wins = j.at("wins").get<int32_t>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
  }

}
#endif // SWAGGER_TYPES_LolClashRoster_HPP
