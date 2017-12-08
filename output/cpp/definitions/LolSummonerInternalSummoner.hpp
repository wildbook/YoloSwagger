#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    bool displayEloQuestionaireFlag;
    std::string internalName;
    std::string displayName;
    bool tutorialFlag;
    std::string lastSeasonHighestRank;
    uint64_t summonerId;
    int32_t profileIconId;
    bool helpFlag;
    bool nameChangeFlag;
    bool advancedTutorialFlag;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerInternalSummoner_t& v) {
    j["displayEloQuestionaireFlag"] = v.displayEloQuestionaireFlag;
    j["internalName"] = v.internalName;
    j["displayName"] = v.displayName;
    j["tutorialFlag"] = v.tutorialFlag;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
    j["helpFlag"] = v.helpFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerInternalSummoner_t& v) {
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.displayName = j.at("displayName").get<std::string>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.helpFlag = j.at("helpFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
