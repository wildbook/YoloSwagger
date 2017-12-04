#ifndef SWAGGER_TYPES_LolSummonerInternalSummoner_HPP
#define SWAGGER_TYPES_LolSummonerInternalSummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerInternalSummoner {
'    // 
    uint64_t accountId;
    // 
    bool advancedTutorialFlag;
    // 
    bool displayEloQuestionaireFlag;
    // 
    std::string displayName;
    // 
    bool helpFlag;
    // 
    std::string internalName;
    // 
    std::string lastSeasonHighestRank;
    // 
    bool nameChangeFlag;
    // 
    int32_t profileIconId;
    // 
    uint64_t summonerId;
    // 
    bool tutorialFlag;
  };

  void to_json(nlohmann::json& j, const LolSummonerInternalSummoner& v) {
    j["accountId"] = v.accountId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["displayName"] = v.displayName;
    j["helpFlag"] = v.helpFlag;
    j["internalName"] = v.internalName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["tutorialFlag"] = v.tutorialFlag;
  }

  void from_json(const nlohmann::json& j, LolSummonerInternalSummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>;
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>;
    v.displayName = j.at("displayName").get<std::string>;
    v.helpFlag = j.at("helpFlag").get<bool>;
    v.internalName = j.at("internalName").get<std::string>;
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>;
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.tutorialFlag = j.at("tutorialFlag").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerInternalSummoner_HPP
