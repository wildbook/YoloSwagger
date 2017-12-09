#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    bool tutorialFlag;
    std::string name;
    std::string previousSeasonHighestTier;
    uint64_t acctId;
    bool advancedTutorialFlag;
    bool nameChangeFlag;
    bool displayEloQuestionaire;
    uint64_t sumId;
    std::string internalName;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["tutorialFlag"] = v.tutorialFlag;
    j["name"] = v.name;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["acctId"] = v.acctId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["sumId"] = v.sumId;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
