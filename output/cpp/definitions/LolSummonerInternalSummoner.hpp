#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    uint64_t accountId;
    bool displayEloQuestionaireFlag;
    bool helpFlag;
    bool nameChangeFlag;
    int32_t profileIconId;
    uint64_t summonerId;
    bool advancedTutorialFlag;
    bool tutorialFlag;
    std::string displayName;
    std::string internalName;
    std::string lastSeasonHighestRank;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["accountId"] = v.accountId;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["helpFlag"] = v.helpFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["tutorialFlag"] = v.tutorialFlag;
    j["displayName"] = v.displayName;
    j["internalName"] = v.internalName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.displayName = j.at("displayName").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
