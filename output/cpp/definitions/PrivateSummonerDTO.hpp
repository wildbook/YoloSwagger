#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    bool advancedTutorialFlag;
    bool nameChangeFlag;
    uint64_t sumId;
    std::string name;
    bool displayEloQuestionaire;
    int32_t profileIconId;
    std::string internalName;
    bool tutorialFlag;
    std::string previousSeasonHighestTier;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["sumId"] = v.sumId;
    j["name"] = v.name;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["profileIconId"] = v.profileIconId;
    j["internalName"] = v.internalName;
    j["tutorialFlag"] = v.tutorialFlag;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
}
