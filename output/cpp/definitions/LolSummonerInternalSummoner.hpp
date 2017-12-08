#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerInternalSummoner_t {
    bool_t displayEloQuestionaireFlag;
    std::string_t internalName;
    std::string_t displayName;
    bool_t tutorialFlag;
    std::string_t lastSeasonHighestRank;
    uint64_t_t summonerId;
    int32_t_t profileIconId;
    bool_t helpFlag;
    bool_t nameChangeFlag;
    bool_t advancedTutorialFlag;
    uint64_t_t accountId;
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
    v.displayEloQuestionaireFlag = j.at("displayEloQuestionaireFlag").get<bool_t>();
    v.internalName = j.at("internalName").get<std::string_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.helpFlag = j.at("helpFlag").get<bool_t>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolSummonerInternalSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
