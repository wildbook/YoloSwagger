#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    std::string previousSeasonHighestTier;
    uint64_t sumId;
    bool advancedTutorialFlag;
    std::string internalName;
    int32_t profileIconId;
    std::string name;
    bool tutorialFlag;
    bool nameChangeFlag;
    uint64_t acctId;
    bool displayEloQuestionaire;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["sumId"] = v.sumId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
    j["name"] = v.name;
    j["tutorialFlag"] = v.tutorialFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["acctId"] = v.acctId;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
