#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    std::string name;
    std::string internalName;
    uint64_t sumId;
    uint64_t acctId;
    bool advancedTutorialFlag;
    bool displayEloQuestionaire;
    std::string previousSeasonHighestTier;
    int32_t profileIconId;
    bool nameChangeFlag;
    bool tutorialFlag;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["name"] = v.name;
    j["internalName"] = v.internalName;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["profileIconId"] = v.profileIconId;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["tutorialFlag"] = v.tutorialFlag;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
