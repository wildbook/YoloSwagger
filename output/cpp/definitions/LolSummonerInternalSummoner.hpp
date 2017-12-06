#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    bool advancedTutorialFlag;
    bool displayEloQuestionaireFlag;
    std::string displayName;
    bool tutorialFlag;
    int32_t profileIconId;
    std::string internalName;
    uint64_t accountId;
    bool helpFlag;
    uint64_t summonerId;
    std::string lastSeasonHighestRank;
    bool nameChangeFlag;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["displayName"] = v.displayName;
    j["tutorialFlag"] = v.tutorialFlag;
    j["profileIconId"] = v.profileIconId;
    j["internalName"] = v.internalName;
    j["accountId"] = v.accountId;
    j["helpFlag"] = v.helpFlag;
    j["summonerId"] = v.summonerId;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["nameChangeFlag"] = v.nameChangeFlag;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.displayName = j.at("displayName").get<std::string>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
  }
}
