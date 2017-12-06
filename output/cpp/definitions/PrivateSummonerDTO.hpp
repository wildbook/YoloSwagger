#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    uint64_t acctId;
    bool advancedTutorialFlag;
    bool displayEloQuestionaire;
    std::string internalName;
    std::string name;
    bool nameChangeFlag;
    std::string previousSeasonHighestTier;
    int32_t profileIconId;
    uint64_t sumId;
    bool tutorialFlag;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["acctId"] = v.acctId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["profileIconId"] = v.profileIconId;
    j["sumId"] = v.sumId;
    j["tutorialFlag"] = v.tutorialFlag;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.acctId = j.at("acctId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
  }
}
