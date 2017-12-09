#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    uint64_t accountId;
    bool tutorialFlag;
    std::string displayName;
    bool helpFlag;
    std::string lastSeasonHighestRank;
    bool advancedTutorialFlag;
    bool displayEloQuestionaireFlag;
    bool nameChangeFlag;
    uint64_t summonerId;
    std::string internalName;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["accountId"] = v.accountId;
    j["tutorialFlag"] = v.tutorialFlag;
    j["displayName"] = v.displayName;
    j["helpFlag"] = v.helpFlag;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["summonerId"] = v.summonerId;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.displayName = j.at("displayName").get<std::string>();
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
