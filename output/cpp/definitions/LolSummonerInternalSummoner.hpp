#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    uint64_t accountId;
    std::string lastSeasonHighestRank;
    bool advancedTutorialFlag;
    std::string displayName;
    bool displayEloQuestionaireFlag;
    std::string internalName;
    int32_t profileIconId;
    bool tutorialFlag;
    bool helpFlag;
    bool nameChangeFlag;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["accountId"] = v.accountId;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayName"] = v.displayName;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
    j["tutorialFlag"] = v.tutorialFlag;
    j["helpFlag"] = v.helpFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayName = j.at("displayName").get<std::string>();
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
