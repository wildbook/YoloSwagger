#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    bool helpFlag;
    std::string internalName;
    uint64_t accountId;
    bool displayEloQuestionaireFlag;
    bool advancedTutorialFlag;
    std::string displayName;
    uint64_t summonerId;
    int32_t profileIconId;
    bool nameChangeFlag;
    bool tutorialFlag;
    std::string lastSeasonHighestRank;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["helpFlag"] = v.helpFlag;
    j["internalName"] = v.internalName;
    j["accountId"] = v.accountId;
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["tutorialFlag"] = v.tutorialFlag;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
